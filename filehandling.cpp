#include<iostream>
#include<fstream>
using namespace std;
// fstream library allows us to work with files, which includes classes
// ofstream: create and write files
// ifstream: read files
// fstream: read/write files

int main() {
    // WRITE
    ofstream FileWrite("file_ex.txt");
    FileWrite << "Hello." << "\n";
    FileWrite << "This is an example." << "\n";
    FileWrite.close();

    // READ
    ifstream FileRead("file_ex.txt");
    string txt;
    while (getline (FileRead, txt)) {
        cout << txt << "\n";
    }
    FileRead.close();

    // READ/WRITE
    fstream FileReadWrite("file_ex.txt");
    string txt2;
    FileReadWrite << "Read/Write line" << "\n";
    FileReadWrite << "Another Read/Write line" << "\n";
    FileReadWrite.close();
    FileReadWrite.open("file_ex.txt");
    while (getline (FileReadWrite, txt2)) {
        cout << txt2 << "\n";
    }
    FileReadWrite.close();

    return 0;
}
