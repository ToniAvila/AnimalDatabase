#include <iostream>
#include <string>
#include "Animal.h"
#include "Cat.h"

// Creates a cat object using a default constructor
Cat::Cat()
{
    setType("");
    setName("");
    setAge("");
    setWeight("");
    setBreed("");
    setColor("");
    setHealth("");
    setSound("");

    numberCatsCreated++;
    catNumber = numberCatsCreated;
};

// Also creates cat object if data is passed
Cat::Cat(string ty, string nm, string ag, string wght,
         string brd, string clr, string hlth, string snd)
{
    // initializing instance variables
    setType(ty);
    setName(nm);
    setAge(ag);
    setWeight(wght);
    setBreed(brd);
    setColor(clr);
    setHealth(hlth);
    setSound(snd);

    numberCatsCreated++;
    catNumber = numberCatsCreated;
};

// Initializing static variable
int Cat::numberCatsCreated = 0;

// "Getter" definitions
int Cat::getCatNumber() const
{
    return catNumber;
}

int Cat::getCatsCreated() const
{
    return numberCatsCreated;
}

// Destructor definition
Cat::~Cat()
{}

// Introduction method for cats
void Cat::Introduction()
{
    cout << "\nI make a(n) " << getSound() << " sound." << endl;
    cout << "My name is " << getName() << "." << endl;
    cout << "I am a " << getType() << "." << endl;
    cout << "I am " << getBreed()  << " breed." << endl;
    cout << "I am " << getAge() << " year(s) old." << endl;
    cout << "I am " << getColor() << " in color." << endl;
    cout << "I weigh " << getWeight() << " pound(s)." << endl;
    cout << "My health condition is: " << getHealth() << "." << endl;
    cout << "I am cat number " << getCatNumber() << "." << endl;
} // Introduction


