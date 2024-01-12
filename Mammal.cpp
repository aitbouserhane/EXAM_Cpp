#include "Mammal.h"
#include <iostream>

Mammal::Mammal() {}

Mammal::Mammal(std::string name, std::string color, std::string diet, std::string habitat, bool isPet, int age, double weight, double height, std::string furColor)
    : Animal(name, color, diet, habitat, isPet, age, weight, height), furColor(furColor) {}

std::string Mammal::getFurColor() const {
    return furColor;
}

void Mammal::setFurColor(std::string furColor) {
    this->furColor = furColor;
}

void Mammal::printInfo() const {
    std::cout << "Animal of type Mammal :" << std::endl;
    std::cout << "Name : " << getName() << std::endl;
    std::cout << "Color : " << getColor() << std::endl;
    std::cout << "Fur Color : " << furColor << std::endl;
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
