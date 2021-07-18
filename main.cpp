/*
Operation Kindness

Toni Avila

When executed, this program reads in animal data from a file and creates
a corresponding object from a class for it. It then fills the object with information
read in from the file. The program then stores it in a specific vector if it is a
dog or cat, while also storing it into an "animal" vector by default. When all necessary
data is read in from the file, the program then displays the information wanted through
reports. First, a report of how many animals there are is displayed, as well as the specific
number of cats and dogs. A second report displays the introduction method of each object in both
the "dogs" and "cats' vectors. The final report loops through the main "animals" vector and
outputs which animal objects are in good health using a getter method and says they are
adoptable.

Change/Improvement Log:
-Figured out how to read in from .csv files and store the data into variables to use in
in setter methods. (5/01/2020)
-Created "Animal" main class and defined all methods, which will be inherited by "dogs"
and "cats" classes.
-Created all separate header and source files for classes/derived classes.
-Inserted a static private int in each class to track number of each made.
-Made variables global in scope for easier use, same for vectors.
-Created report functions in main.cpp which display each report.
-Further modularized main.cpp by making objectFill routine.
-Program pauses at the start to let user lead welcome message. Also pauses at the end
so user can read reports when running the executable.

Notes:
-File used to read in data from is specified as Animal Shelter Data-04.csv
Instructions do not specify for the user to input the file name and perform
input validation.
-If a data field is empty, it will be displayed as "unknown."
-Dogs and Cats are derived classes from the animals class.
-Data is read in from a .csv file opposed to a .txt file.
-3 animals are not introduced, as they are not dogs or cats, and the
instructions do not specify to introduce them for whatever reason.
-Getter methods are declared constant to prevent corruption.
-All private string data variables are inherited by child functions.

For Reference:
-https://www.youtube.com/watch?v=wRj9PZ2wyZI
I used this to figure out how to read in from the .csv file and not repeat read the last line.

*/

#include <iostream>
#include <windows.h> // for sleep
#include <fstream> // for file i/o
#include <string> // for string objects
#include "Animal.h" // for animal class
#include "Dog.h" // for dog class
#include "Cat.h" // for cat class
#include <vector> // for vector

using namespace std;

// variables needed for objects
string type, name, age, weight, breed,
       color, health, sound;

// file object
ifstream inputCSV;
string fileName = "Animal Shelter Data-04.csv"; // file given

// will store all corresponding objects
vector<Animal>animals;
vector<Dog>dogs;
vector<Cat>cats;
vector<Animal>otherAnimals; // specifically for animals that aren't dogs or cats.

void displayReport1()
{
    // Creating Report 1, displays number of each by accessing static int var
    cout << "----------REPORT 1, NUMBER OF EACH TYPE CREATED----------\n" << endl;
    cout << "Total number of animals created: " << animals[0].getAnimalsMade() << endl;
    cout << "Total number of dogs created: " << dogs[0].getDogsCreated() << endl;
    cout << "Total number of cats created: " << cats[0].getCatsCreated() << endl;
} // displayReport1

void displayReport2And3()
{
    cout << "\n----------REPORT 2 AND 3, INTRODUCTION OF DOGS AND CATS----------\n" << endl;

    cout << "\n----------INTRODUCTION OF DOGS----------" << endl;
    // Iterates through vector, with each dog member introducing itself
    for (unsigned int i = 0; i < dogs.size(); i ++)
        dogs[i].Introduction();

    cout << "\n----------INTRODUCTION OF CATS----------" << endl;

    // Iterates through cat vector, with each cat member introducing itself
    for (unsigned int i = 0; i < cats.size(); i++)
        cats[i].Introduction();

    cout << "\n----------INTRODUCTION OF OTHER ANIMALS----------" << endl;

    // Iterates through otherAnimals vector, with each member introducing itself
    for (unsigned int i = 0; i < otherAnimals.size(); i++)
        otherAnimals[i].Introduction();

    cout << endl;
} // displayReport2and3

void displayReport4()
{
    // Report 4, iterates through animal vector, checking each health instance
    // If health instance is not equal to "good", they are not adoptable
    cout << "\n----------REPORT 4, ADOPTABLE ANIMALS----------\n" << endl;
    for (unsigned int i = 0; i < animals.size(); i++)
    {
        if (animals[i].getHealth() != "good")
            continue;
        else
            cout << animals[i].getName() << ", a " << animals[i].getType() << ", is in good health and ready to be adopted." << endl;
    }
} // displayReport4

void welcome()
{
    cout << "Welcome to Operation Kindness!" << endl
         << "Today this program will read from a default file called Animal Shelter Data-04" << endl
         << "and store it in a database. Feel free to read over the reports.\n" << endl;
} // welcome

void fillObjects()
{
    string titleOfData;
    inputCSV.open(fileName);
    getline(inputCSV, titleOfData, '\n'); // this reads in the first row, which is unneeded
    cout << "For informational purposes, the data we will be reading in is in the format of "
         << endl << titleOfData << ".\n" << endl;

    Sleep(5000);

    while (getline(inputCSV, type, ','))
    {
        // fill each string using getline, with a comma as a token to indicate stop reading
        // '\n' is used for last member because it stops at a newline member
        getline(inputCSV, name, ',');
        getline(inputCSV, age, ',');
        getline(inputCSV, weight, ',');
        getline(inputCSV, breed, ',');
        getline(inputCSV, color, ',');
        getline(inputCSV, health, ',');
        getline(inputCSV, sound, '\n');

        if (type == "cat") // If the type is a cat, a cat object is made
        {
            Cat cat(type, name, age, weight, breed, color, health, sound);
            animals.push_back(cat);
            cats.push_back(cat);
        }
        else if (type == "dog") // If the type is a dog, a dog object is made
        {
            Dog dog(type, name, age, weight, breed, color, health, sound);
            animals.push_back(dog);
            dogs.push_back(dog);
        }
        else // Any animal other than a dog or cat, animal object is made
        {
            Animal animal(type, name, age, weight, breed, color, health, sound);
            animals.push_back(animal);
            otherAnimals.push_back(animal);
        }
    }
} // fillObjects

int main()
{
    welcome();
    fillObjects();

    // Reports
    displayReport1();
    displayReport2And3();
    displayReport4();

    inputCSV.close();

    cout << "\nProgram is paused for user to read output.\n";
    system("pause");

    return 0;
}

