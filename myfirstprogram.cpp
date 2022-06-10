#include <iostream>                 // header file
#include <string>
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
  getline (cin, input2);              // using cin directly only take first word
                                    // getline allows for entire line to be entered
  cout << input2 << endl;
  cout << input2[-1] << endl;        // C++ allows negative indexing?

  cout << "Done";
  return 0;                         // return 0 ends main function
}                                   // close curly brace at end of function