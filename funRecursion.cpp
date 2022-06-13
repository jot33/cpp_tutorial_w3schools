#include <iostream>
using namespace std;

// Check if integer array is palindrome using recursion

// approach: reverse digits of number, then compare to original

int numDigits(int n) {
    unsigned int num_digits = 0;
    do {
        ++num_digits;
        n /= 10;
    } while (n);
    return num_digits;
}

// check if one digit
bool oneDigit(int n) {
    return numDigits(n) == 1;
}

// reverse digits
int revNum(int n) {
    int reversed = 0; // last digit to first of reversed
    while (n) {
        reversed = (reversed * 10) + (n % 10);
        n /= 10;
    }
    return reversed;
}

bool checkDigits(int n, int r) {
    return (n == r);
}

bool isPalCheck(int n, int r) {
    // base case: exhausted all digits
    if (!n & !r) return n == r;

    // recursive call
    bool lastTrue = isPalCheck(n/10, r/10);

    // if last was false, continue returning false
    if (!lastTrue) return false;

    // else check if last 2 digits same
    return ((n%10) == (r%10));
        
}

// check if palindrome
bool isPal(int n) {
    if (oneDigit(n)) {
        return false;
    }

    int r = revNum(n);

    return isPalCheck(n, r);
}

int main() {
    int n[4] = {1234, 121, 1, 1234321};
    for (int i; i < 4; i++) {
        cout << n[i] << " is pal? " << isPal(n[i]) << endl;
    }
    return 0;
}