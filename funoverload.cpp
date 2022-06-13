#include <iostream>
using namespace std;

// overloading -> use same function name but diff params

// add two integers
int plusFun(int a, int b) {
    return a + b;
}

double plusFun(double a, double b) {
    return a + b;
}

int main() {
    // Integers
    int a = 1;
    int b = 2;

    cout << "1 + 2 = " << plusFun(a, b) << endl;

    // Doubles
    double x = 1.1;
    double y = 2.2;

    cout << "1.1 + 2.2 = " << plusFun(x, y) << endl;

    return 0;
}