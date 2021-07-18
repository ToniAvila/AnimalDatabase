#ifndef ANIMAL_H_INCLUDED
#define ANIMAL_H_INCLUDED

using namespace std;

// Parent function
class Animal
{
private:
    string type, name, age, weight,     // these variables will be inherited by dogs and cats
           breed, color, health, sound;

    static int animalsMade; // for storing number of total animals made
public:
    Animal(); // default constructor
    Animal(string, string, string, string,
           string, string, string, string); // constructor which fills all data fields

    // Setters
    void setType(string);
    void setName(string);
    void setAge(string);
    void setWeight(string);
    void setBreed(string);
    void setColor(string);
    void setHealth(string);
    void setSound(string);

    // Getters
    string getType() const;
    string getName() const;
    string getAge() const;
    string getWeight() const;
    string getBreed() const;
    string getColor() const;
    string getHealth() const;
    string getSound() const;

    int getAnimalsMade() const;
    void Introduction() const;

    // Displaying default destructor for good practice, body will not do anything
    ~Animal();

};

#endif // ANIMAL_H_INCLUDED
