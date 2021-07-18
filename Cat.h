#ifndef CAT_H_INCLUDED
#define CAT_H_INCLUDED

#include "Animal.h"

// Child function
class Cat: public Animal
{
private:
    int catNumber;
    static int numberCatsCreated; // will keep track of num of cats
public:
    // Constructors
    Cat();
    Cat(string, string, string, string, string, string, string, string);

    // Method functions
    int getCatNumber() const ;
    int getCatsCreated() const ;
    void Introduction();

    // Displaying default destructor for good practice, body will not do anything
    ~Cat();
};

#endif // CAT_H_INCLUDED
