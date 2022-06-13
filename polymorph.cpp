#include<iostream>
#include<string>
using namespace std;

//base class
class Animal {
    public:
        string animalSound();   // abstract declaration
};

// dog
class Dog: public Animal {
    public:
        string animalSound() {
            return "bark";
        }
};

class Cow: public Animal {
    public:
        string animalSound() {
            return "Moo";
        }
};

int main() {
    Dog dog;
    cout << dog.animalSound() << endl;
    Cow cow;
    cout << cow.animalSound() << endl;
    return 0;
}