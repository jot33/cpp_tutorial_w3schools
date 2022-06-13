#include<iostream>
#include<string>
using namespace std;

// base class
class Mammal {
    protected:  // access specifier can be seen by inherited classes
        bool warmBlood = true;
        bool vertebrate = true;
};

// inherited class
class Human: public Mammal {
    protected:
        int height = 65;
        int weight = 175;
};

// multi-level inheritance
class Male: public Human {
    public:
        string sex = "m";
        string name = "John";

        bool isWarmBlooded() {
            return warmBlood;
        }

        bool isVertebrate() {
            return vertebrate;
        }

        int getWeight() {
            return weight;
        }

        int getHeight() {
            return height;
        }
};

// another class
class American {
    protected:
        string favFood = "Hamburger";
};

// multiple-inheritance
class Female: public Human, public American {
    public:
        string sex = "F";
        string name = "Jane";

        string getFavFood() {
            return favFood;
        }
};

int main() {
    Male dude;
    cout << dude.isWarmBlooded() << endl;
    cout << dude.getWeight() << endl;
    cout << dude.name << endl;

    Female lady;
    cout << lady.getFavFood() << endl;
    cout << lady.name << endl;
    return 0;
}