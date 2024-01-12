#include "Reptile.h"
#include <iostream>
using namespace std;

Reptile::Reptile() {}

Reptile::Reptile(string name, string color, string diet, string habitat, bool isPet, int age, double weight, double height, string scalePattern)
    : Animal(name, color, diet, habitat, isPet, age, weight, height), scalePattern(scalePattern) {}

std::string Reptile::getScalePattern() const {
    return scalePattern;
}

void Reptile::setScalePattern(std::string scalePattern) {
    this->scalePattern = scalePattern;
}

void Reptile::printInfo() const {
    std::cout << "Animal of type Reptile :" << std::endl;
    std::cout << "Name : " << getName() << std::endl;
    std::cout << "Color : " << getColor() << std::endl;
    std::cout << "Scale Pattern : " << scalePattern << std::endl;
    std::cout << "Diet : " << getDiet() << std::endl;
    std::cout << "Habitat : " << getHabitat() << std::endl;
    std::cout << "Age : " << getAge() << " 's old" << std::endl;
    if (Animal::getIsPet()) {
        std::cout << "This animal is a pet" << std::endl;
    } else {
        std::cout << "This animal is not a pet" << std::endl;
    }
    std::cout << "Weight : " << getWeight() << " kg" << std::endl;
    std::cout << "Height : " << getHeight() << " cm" << std::endl;
}
