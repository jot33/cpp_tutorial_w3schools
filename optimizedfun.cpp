#include <iostream>
using namespace std;

// function declarations and definitions can be separated for optimization

// if function not DECLARED before main(), throws error

void myFun();               // declaration

int main() {
    myFun();                // called
    return 0;
}

void myFun() {
    cout << "I'm declared"; // definition
}