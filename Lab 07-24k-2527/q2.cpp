#include <iostream>

using namespace std;

class Animal {
public:
    virtual void eat(string food) {
        cout << "Animal is eating " << food << endl;
    }
};

class Herbivore : public Animal {
public:
    void eat(string food) override {
        cout << "Herbivore is eating plants: " << food << endl;
    }
};

class Carnivore : public Animal {
public:
    void eat(string food) override {
        cout << "Carnivore is eating meat: " << food << endl;
    }
};

class Omnivore : public Animal {
public:
    void eat(string food) override {
        cout << "Omnivore is eating both plants and meat: " << food << endl;
    }
};

int main() {
    Animal* a;

    Herbivore h;
    Carnivore c;
    Omnivore o;

    a = &h;
    a->eat("Grass");

    a = &c;
    a->eat("Chicken");

    a = &o;
    a->eat("Berries and Fish");

    return 0;
}
