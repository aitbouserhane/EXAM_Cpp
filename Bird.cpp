#include "Bird.h"
#include <iostream>

using namespace std;
Bird::Bird() {}

Bird::Bird(string name, string color, string diet, string habitat, bool isPet, int age, double weight, double height, double wingspan): Animal(name, color, diet, habitat, isPet, age, weight, height), wingspan(wingspan) {}

double Bird::getWingspan() const {
    return wingspan;
}

void Bird::setWingspan(double wingspan) {
    this->wingspan = wingspan;
}

void Bird::printInfo() const {
    std::cout << "Animal of type Bird :" << std::endl;
    std::cout << "Name : " << getName() << std::endl;
    std::cout << "Color : " << getColor() << std::endl;
    std::cout << "Wingspan : " << wingspan << " cm" << std::endl;
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
