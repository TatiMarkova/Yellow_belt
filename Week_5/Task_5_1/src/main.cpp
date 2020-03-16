/****************************
 * Coursera                 *
 * Yellow belt              *
 * @autor: Tatiana Markova  *
 * task: 5_1                *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

/********************
 * Input:  (main)   *
 ********************/
class Animal {
public:
    Animal (const string& name) : Name(name) {}

    const string Name;
};


class Dog : public Animal {
public:
    Dog (const string& name) : Animal(name) {}

    void Bark() {
        cout << Name << " barks: woof!" << endl;
    }
};

int main(int argv, char* argc[]) {
    Dog dog ("Chappie");
    Animal animal ("Animal");
    dog.Bark();

    return EXIT_SUCCESS;
}

/*****************************
 * Output:                   *
 *    Chappie barks: woof!   *
 *****************************/
