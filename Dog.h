#ifndef DOG_H_INCLUDED
#define DOG_H_INCLUDED

#include "Animal.h"

// Child function
class Dog: public Animal
{
private:
    int dogNumber;
    static int numberDogsCreated; // will keep track of num of dogs
public:
    // Constructors
    Dog();
    Dog(string, string, string, string, string, string, string, string);

    // Method functions
    int getDogNumber() const;
    int getDogsCreated() const;
    void Introduction();

    // Displaying default destructor for good practice, body will not do anything
    ~Dog();
};

#endif // DOG_H_INCLUDED
