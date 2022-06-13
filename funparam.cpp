#include <iostream>
using namespace std;

// RETURN KEYWORD
int addNums(int x, int y) {
    return x + y;       // return the type listed
}

// REFERENCED PARAMETERS
// using references (&) in parameters
// function changes referenced object
void swapNums(int &x, int &y) {
    int z = x;
    x = y;
    y = z;
}

// ARRAY PARAMETERS
// for some reason sizeof(a) / sizeof(int)
// doesn't output right length of passed array
void arrayDemo(int a[4]) {
    for (int i = 1; i < 4; i++) {
        cout << a[i-1] << " + " << a[i] << " = " << addNums(a[i-1], a[i]) << "\n";
    }
}

int main() {
    int firstNum = 10;
    int secondNum = 20;

    // RETURN function
    cout << "10 + 20 = " << addNums(firstNum, secondNum) << "\n";

    // REFERENCED PARAMETER function
    cout << "Before swap: " << "\n";
    cout << firstNum << secondNum << "\n";

    // Call the function, which will change the values of firstNum and secondNum
    swapNums(firstNum, secondNum);

    cout << "After swap: " << "\n";
    cout << firstNum << secondNum << "\n";

    // ARRAY PARAMETER
    int a[4] = {0, 1, 2, 3};
    arrayDemo(a);

    return 0;
}