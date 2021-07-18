#include <iostream>
#include <string>
#include "Animal.h"
#include "Dog.h"

Dog::Dog() // Creates a dog object using a default constructor
{
    setType("");
    setName("");
    setAge("");
    setWeight("");
    setBreed("");
    setColor("");
    setHealth("");
    setSound("");

    numberDogsCreated++;
    dogNumber = numberDogsCreated;
};

// Also creates a dog object if data is passed
Dog::Dog(string ty, string nm, string ag, string wght,
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

    numberDogsCreated++;
    dogNumber = numberDogsCreated;
};

// initializing static int
int Dog::numberDogsCreated = 0;

// Returns corresponding dog number
int Dog::getDogNumber() const
{
    return dogNumber;
}

// Returns total dog objects created
int Dog::getDogsCreated() const
{
    return numberDogsCreated;
}

// Destructor
Dog::~Dog()
{}

// Introduction method for dogs
void Dog::Introduction()
{
    cout << "\nI make a(n) " << getSound() << " sound." << endl;
    cout << "My name is " << getName() << "." << endl;
    cout << "I am a " << getType() << "." << endl;
    cout << "I am " << getBreed()  << " breed." << endl;
    cout << "I am " << getAge() << " year(s) old." << endl;
    cout << "I am " << getColor() << " in color." << endl;
    cout << "I weigh " << getWeight() << " pound(s)." << endl;
    cout << "My health condition is: " << getHealth() << "." << endl;
    cout << "I am dog number " << getDogNumber() << "." << endl;
} // Introduction


