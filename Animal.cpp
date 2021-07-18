#include <iostream>
#include <string>
#include "Animal.h"

// Default constructor
Animal::Animal()
{
    // initializing instance variables
    type = "";
    name = "";
    age = "";
    weight = "";
    breed = "";
    color = "";
    health = "";
    sound = "";

    animalsMade++;
}

// Non-default constructor, can pass data to immediately initialize
Animal::Animal(string ty, string nm, string ag, string wght,
               string brd, string clr, string hlth, string snd)
{
    // initializing instance variables
    type = ty;
    name = nm;
    age = ag;
    weight = wght;
    breed = brd;
    color = clr;
    health = hlth;
    sound = snd;

    animalsMade++;
}

Animal::~Animal()
{}

// "Setter" function definitions below

void Animal::setType(string temp)
{
    type = temp;
}

void Animal::setName(string temp)
{
    name = temp;
}

void Animal::setAge(string temp)
{
    age = temp;
}

void Animal::setWeight(string temp)
{
    weight = temp;
}

void Animal::setBreed(string temp)
{
    breed = temp;
}

void Animal::setColor(string temp)
{
    color = temp;
}

void Animal::setHealth(string temp)
{
    health = temp;
}

void Animal::setSound(string temp)
{
    sound = temp;
}

// Getter method definitions, will return "unknown" if data field is empty
string Animal::getType() const
{
    if (type == "")
        return "\"unknown\"";
    else
        return type;
}

string Animal::getName() const
{
    if (name == "")
        return "\"unknown\"";
    else
        return name;
}
string Animal::getAge() const
{
    if (age == "")
        return "\"unknown\"";
    else
        return age;
}

string Animal::getWeight() const
{
    if (weight == "")
        return "\"unknown\"";
    else
        return weight;
}

string Animal::getBreed() const
{
    if (breed == "")
        return "\"unknown\"";
    else
        return breed;
}

string Animal::getColor() const
{
    if (color == "")
        return "\"unknown\"";
    else
        return color;
}

string Animal::getHealth() const
{
    if (health == "")
        return "\"unknown\"";
    else
        return health;
} //getHealth

string Animal::getSound() const
{
    if (sound == "")
        return "\"unknown\"";
    else
        return sound;
} // getSound

int Animal::getAnimalsMade() const
{
    return animalsMade;
}

// Initializes static variable which counts animals
int Animal::animalsMade = 0;

// Introduction method for animals specifically
void Animal::Introduction() const
{
    cout << "\nI make a(n) " << getSound() << " sound." << endl;
    cout << "My name is " << getName() << "." << endl;
    cout << "I am a " << getType() << "." << endl;
    cout << "I am " << getBreed()  << " breed." << endl;
    cout << "I am " << getAge() << " year(s) old." << endl;
    cout << "I am " << getColor() << " in color." << endl;
    cout << "I weigh " << getWeight() << " pound(s)." << endl;
    cout << "My health condition is: " << getHealth() << "." << endl;
}
