#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
using namespace std;

class Animal {
protected:
    string name;
    string color;
    string diet;
    string habitat;
    string sounds;
    bool isPet;
    int age;
    double weight;
    double height;

public:
    // Constructeurs
    Animal();
    Animal(string name, string color, string diet, string habitat, string sounds, bool isPet, int age, double weight, double height);
    Animal(const Animal& other);

    // Getters et setters
    string getName() const;
    void setName(string name);
    string getColor() const;
    void setColor(string color);
    string getDiet() const;
    void setDiet(string diet);
    string getHabitat() const;
    void setHabitat(string habitat);
    string getSounds() const;
    void setSounds(string sounds);
    bool getIsPet() const;
    void setIsPet(bool isPet);
    int getAge() const;
    void setAge(int age);
    double getWeight() const;
    void setWeight(double weight);
    double getHeight() const;
    void setHeight(double height);
    
    // Fonction pour afficher le son de l'animal
    void makeSound() const;

    // Fonction virtuelle pour afficher toutes les informations de l'animal
    virtual void printInfo() const;
};

#endif // ANIMAL_H
