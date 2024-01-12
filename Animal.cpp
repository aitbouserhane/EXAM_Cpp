#include "Animal.h"

// Constructeur par défaut
Animal::Animal() : name(""), color(""), diet(""), habitat(""), sounds(""), isPet(false), age(0), weight(0.0), height(0.0) {}

// Constructeur paramétré
Animal::Animal(string animalName, string animalColor, string animalDiet, string animalHabitat, string animalSounds, bool animalIsPet, int animalAge, double animalWeight, double animalHeight) :
    name(animalName), color(animalColor), diet(animalDiet), habitat(animalHabitat), sounds(animalSounds), isPet(animalIsPet), age(animalAge), weight(animalWeight), height(animalHeight) {}

// Constructeur de copie
Animal::Animal(const Animal& other) {
    name = other.name;
    color = other.color;
    diet = other.diet;
    habitat = other.habitat;
    sounds = other.sounds;
    isPet = other.isPet;
    age = other.age;
    weight = other.weight;
    height = other.height;
}

// Getters et setters
string Animal::getName() const {
    return name;
}

void Animal::setName(string name) {
    this->name = name;
}

string Animal::getColor() const {
    return color;
}

void Animal::setColor(string color) {
    this->color = color;
}

string Animal::getDiet() const {
    return diet;
}

void Animal::setDiet(string diet) {
    this->diet = diet;
}

string Animal::getHabitat() const {
    return habitat;
}

void Animal::setHabitat(string habitat) {
    this->habitat = habitat;
}

string Animal::getSounds() const {
    return sounds;
}

void Animal::setSounds(string sounds) {
    this->sounds = sounds;
}

bool Animal::getIsPet() const {
    return isPet;
}

void Animal::setIsPet(bool isPet) {
    this->isPet = isPet;
}

int Animal::getAge() const {
    return age;
}

void Animal::setAge(int age) {
    this->age = age;
}

double Animal::getWeight() const {
    return weight;
}

void Animal::setWeight(double weight) {
    this->weight = weight;
}

double Animal::getHeight() const {
    return height;
}

void Animal::setHeight(double height) {
    this->height = height;
}

// Fonction pour afficher le son de l'animal
void Animal::makeSound() const {
    cout << "Sound: " << sounds << endl;
}

// Fonction virtuelle pour afficher toutes les informations de l'animal
void Animal::printInfo() const {
    cout << "Animal of unknown type:" << endl;
    cout << "Name: " << name << endl;
    cout << "Color: " << color << endl;
    cout << "Diet: " << diet << endl;
    cout << "Habitat: " << habitat << endl;
    cout << "Age: " << age << " years old" << endl;
    if (isPet) {
        cout << "This animal is a pet" << endl;
    } else {
        cout << "This animal is not a pet" << endl;
    }
    cout << "Weight: " << weight << " kg" << endl;
    cout << "Height: " << height << " cm" << endl;
}
