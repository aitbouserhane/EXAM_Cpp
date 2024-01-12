#include "Zoo.h"
#include <iostream>
#include <stdexcept>

int Zoo::MAX_CAPACITY = 10;

Zoo::Zoo() {
    name = "Unnamed Zoo";
}

Zoo::Zoo(const std::string& name) : name(name) {}

Zoo::Zoo(const std::string& name, const std::vector<Animal*>& animals) : name(name), animals(animals) {}

std::string Zoo::getName() const {
    return name;
}

void Zoo::setName(const std::string& name) {
    this->name = name;
}

void Zoo::listAnimals() const {
    std::cout << "Animals in the Zoo '" << name << "':" << std::endl;
    for (const Animal* animal : animals) {
        animal->printInfo();
        std::cout << "-----------------------------" << std::endl;
    }
}

void Zoo::addAnimal(Animal* animal) {
    if (animals.size() >= MAX_CAPACITY) {
        std::cout << "The Zoo is at full capacity. Cannot add more animals." << std::endl;
        return;
    }

    // Check if an animal with the same name already exists
    int index = searchAnimalByName(animal->getName());
    if (index != -1) {
        std::cout << "An animal with the name '" << animal->getName() << "' already exists in the Zoo." << std::endl;
        return;
    }

    // Insert the animal in sorted order
    animals.insert(std::lower_bound(animals.begin(), animals.end(), animal,
        [](const Animal* a1, const Animal* a2) {
            return a1->getName() < a2->getName();
        }), animal);

    std::cout << "Added '" << animal->getName() << "' to the Zoo '" << name << "'." << std::endl;
}

int Zoo::searchAnimalByName(const std::string& name) const {
    auto it = std::lower_bound(animals.begin(), animals.end(), name,
        [](const Animal* a, const std::string& n) {
            return a->getName() < n;
        });

    if (it != animals.end() && (*it)->getName() == name) {
        return std::distance(animals.begin(), it);
    }

    return -1;
}

void Zoo::removeAnimalByName(const std::string& name) {
    int index = searchAnimalByName(name);
    if (index != -1) {
        delete animals[index];
        animals.erase(animals.begin() + index);
        std::cout << "Removed '" << name << "' from the Zoo '" << this->name << "'." << std::endl;
    } else {
        std::cout << "Animal with the name '" << name << "' not found in the Zoo." << std::endl;
    }
}

double Zoo::averageAgeForType(const std::string& type) const {
    int count = 0;
    double totalAge = 0.0;

    for (const Animal* animal : animals) {
        if (animal->getType() == type) {
            totalAge += animal->getAge();
            count++;
        }
    }

    if (count > 0) {
        return totalAge / count;
    }

    return 0.0; // Return 0 if no animals of the specified type are found
}
