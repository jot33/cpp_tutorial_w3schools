#include <iostream>                 // header files
#include <string>
#include <cmath>                    // cmath allows for sqrt(), log(), round()
using namespace std;                // allows use of names for objects and variables from std library
                                    // blank lines ignored by compiler
int main() {                        // function
  cout << "Hello World! \n";        // "cout" is object, "<<" is insertion operator, \n = new line

  /*
      alternative escapes:
      \t = horizontal tab
      \\ backslash
      \" double quote character
  */

  cout << "I am learning C++ \n\n"; // add as many cout objects as desired, \n\n = blank line
  cout << "alt end line" << endl;   // endl = alternative way to get new line
  cout << "end" << endl;

  // variables

  // syntax: type variableName = value;

  /*
    int - integer
    double - floating point number
    char - character
    string - text
    bool - boolean true or false
  */

  int myNum = 15;
  cout << myNum << endl;
  const int neverChanges = 1;       // const keyword locks variable to read-only
  cout << "neverChanges variable will always be: " << neverChanges << endl;

  // get user input with "cin"
  int input1;
  cout << "\nInput an integer: ";
  cin >> input1;
  cout << "entered: " << input1 << endl;

  // numbers
  double doubleNum = 3e4;
  cout << doubleNum << endl;
  doubleNum = 3E6;                  // can use "e" or "E" for scientific notation
  cout << doubleNum << endl;

  // to create string variable, <string> header file required
  string myStr = "Hello";
  cout << myStr << endl;
  string myStr2 = " World";
  cout << myStr + myStr2 << endl;   // concatenate with "+"
  cout << myStr.append(myStr2) << endl;     // append one string to another
  string input2;
  cout << "Type something: ";
  cin.ignore();                   // ignores whitespace from previous line leading into getline()
  getline (cin, input2);              // using cin directly only take first word
                                    // getline allows for entire line to be entered
  cout << input2 << endl;
  cout << input2[input2.length() - 1] << endl;        // C++ doesn't seem to allow negative indexing

  // MATH

  cout << "max(5, 10): " << max(5, 10) << endl;
  cout << "min(5, 10): " << min(5, 10) << endl;

  // using cmath header
  cout << "sqrt(9): " << sqrt(9) << endl;
  cout << "round(2.6): " << round(2.6) << endl;
  cout << "log(2): " << log(2) << endl;

  // BOOLEAN

  bool cppFun = true;
  bool cppBoring = false;
  cout << "cppFun: " << cppFun << endl;
  cout << "cppBoring: " << cppBoring << endl;

  // Conditional (if ... else)

  // if (condition1) { code }
  // else if (condition2) { code }
  // ...
  // else if (conditionN) { code }
  // else { code }

  if (cppBoring) {
    cout << "I'm bored";
  } else if (5 > 10) {
    cout << "Something's wrong";
  } else if (cppFun) {
    cout << "C++ is fun!" << endl;
  } else {
    cout << "doesn't matter";
  }

  // Ternary operator as if .. else shorthand
  // syntax: variable = (condition) ? expressionTrue : expressionFalse;
  string tern = cppFun ? "C++ is fun :)" : "C++ is boring";
  cout << "ternary output: " << tern << endl;

  // switch (case) statements

  int day = 4;
  switch (day) {
    case 6:
      cout << "Today is Saturday";
      break;
    case 7:
      cout << "Today is Sunday";
      break;
    default:
      cout << "Looking forward to the Weekend";
  }
  // Outputs "Looking forward to the Weekend"

  // while and do/while
  // while (condition) { code }
  // do { code } while (condition);
  // do/while will execute code at least once

  int counter = 0;
  do {
    cout << "Counter: " << counter << endl;
    counter++;
  } while (counter < 3);

  // FOR LOOP
  // syntax: for (statement1; statement2; statement3) { code }
  // statement1: executed once before loop
  // statement2: loop condition to continue
  // statement3: executed at end of loop

  for (int i = 0; i < 7; i++) {
    if (i == 3) {
      continue;
    } else if (i == 5) {
      break;
    }
    cout << "for loop iteration: " << i << endl;
  }

  // arrays
  int myArray[3][3][3];             // declares empty 3-dimensional array
  cout << sizeof(myArray) << endl;
  cout << myArray << endl;
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {
        myArray[i][j][k] = i;
      }
    }
  }

  int myArray2[2][2] = {
    {0, 1},
    {2, 3}
  };

  cout << myArray2[0][1] << endl;
  cout << myArray2 << endl;

  // structures (struct keyword)
  struct {
    string brand;
    string model;
    int year;
  } myCar1, myCar2; // We can add variables by separating them with a comma here

  // Put data into the first structure
  myCar1.brand = "BMW";
  myCar1.model = "X5";
  myCar1.year = 1999;

  // Put data into the second structure
  myCar2.brand = "Ford";
  myCar2.model = "Mustang";
  myCar2.year = 1969;

  // Print the structure members
  cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
  cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

  // references
  // "&" is the reference operator
  // references to a memory object using & operator
  string toy = "block";
  string &plaything = toy;
  cout << toy << endl;
  plaything = "ball";
  cout << toy << endl;

  // & operator can also be used to get memory address of object
  cout << "toy memory address: " << &toy << endl;

  // pointers
  // "*" is the deference operator
  // a pointer stores memory address as its value, created with
  // * can be anywhere between type and variable name, but preferred is:
  // type* varName; 
  string* toyptr = &toy;
  bool testptr = toyptr == &toy;
  cout << "toyptr == &toy? " << testptr << endl;
  cout << *toyptr << endl; // prints value of object pointer points to
  *toyptr = "gameboy";
  cout << toy << endl;
  cout << toyptr << endl;


  cout << "Done";
  return 0;                         // return 0 ends main function
}                                   // close curly brace at end of functio