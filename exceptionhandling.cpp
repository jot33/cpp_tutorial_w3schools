#include<iostream>
using namespace std;

int main() {
    try {
        throw 5;
    }
    catch (int e) {   
        cout << "exception thrown: " << e << endl;
    }

    try {
        throw "whatever";
    }
    catch (...) {       // "..." means catch any exception
        cout << "exception thrown";
    }

    return 0;
}