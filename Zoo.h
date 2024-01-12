#ifndef ZOO_H
#define ZOO_H

#include <string>
#include <vector>
#include <algorithm>
#include "Animal.h"

class Zoo {
private:
    std::string name;
    static int MAX_CAPACITY;
    std::vector<Animal*> animals;

public:
    // Constructors
    Zoo();
    Zoo(const std::string& name);
    Zoo(const std::string& name, const std::vector<Animal*>& animals);

    // Getter and Setter for name
    std::string getName() const;
    void setName(const std::string& name);

    // Function to list animals
    void listAnimals() const;

    // Function to add an animal to the zoo
    void addAnimal(Animal* animal);

    // Function to search for an animal by name
    int searchAnimalByName(const std::string& name) const;

    // Function to remove an animal by name
    void removeAnimalByName(const std::string& name);

    // Function to calculate the average age for a specific type of animal
    double averageAgeForType(const std::string& type) const;
};

#endif // ZOO_H
