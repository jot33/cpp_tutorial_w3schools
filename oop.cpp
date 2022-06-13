#include<iostream>
using namespace std;

// CLASS/OBJECT

class MyClass {       // The class
    // Access specifier types:
    // public:      members are accessible from outside the class
    // private:     members cannot be accessed (or viewed) from outside the class
    // protected:   members cannot be accessed from outside the class, but
    //              members CAN be accessed by INHERITED classes.
  private:
    int privateNum = 0;

  public:             // Access specifier
    int num1;       // attribute
    int num2;       // attribute

    // CONSTRUCTOR (automatically called when class instantiated)
    MyClass() {
        cout << "MyClass object created" << endl;
    }

    // Overloaded constructor
    MyClass(int a, int b) {
        cout << "MyClass object created" << endl;
        num1 = a;
        num2 = b;
        cout << "num1, num2 = " << num1 << ", " << num2 << endl;
    }

    MyClass(int x, int y, int z);

    // OBJECTS
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)

    // CLASS METHOD (INSIDE EXAMPLE)
    void myMethod() {
        cout << "method called" << endl;
    }

    // CLASS METHOD (OUTSIDE DECLARATION)
    void myMethod2();

    // ENCAPSULATION (get/set)

    // Setter
    void setNum(int n) {
        privateNum = n;
    }

    // Getter
    int getNum() {
        return privateNum;
    }

};

// CLASS METHOD OUTSIDE EXAMPLE (uses scope resolution operator "::")
void MyClass::myMethod2() {
    cout << "method 2 called" << endl;
}

// CLASS CONSTRUCTOR OUTSIDE EXAMPLE
MyClass::MyClass(int x, int y, int z) {
    cout << "MyClass object created" << endl;
    cout << "Total = " << x + y + z << endl;
}

int main() {
  MyClass myObj;  // Create an object of MyClass
  MyClass myObj2(1, 2);
  MyClass myObj3(1, 2, 3);

  // Access attributes and set values
  myObj.myNum = 15; 
  myObj.myString = "Some text";

  // Print attribute values
  cout << myObj.myNum << "\n";
  cout << myObj.myString << endl;

  // Call method
  myObj.myMethod();
  myObj.myMethod2();

  // Encapsulation: Get/set private number
  cout << myObj.getNum() << endl;
  myObj.setNum(5);
  cout << myObj.getNum() << endl;

  return 0;
}