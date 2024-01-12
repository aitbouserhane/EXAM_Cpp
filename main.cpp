#include "Animal.h"
#include <iostream>

using namespace std;

#include "Animal.h"
#include "Mammal.h"
#include "Bird.h"
#include "Reptile.h"
#include <vector>

int main() {
    // Créez quelques objets Animal
    Animal unknownAnimal("Flash", "black", "Carnivore", "Mountains", "Growls", false, 9, 9.9, 1.8);

    // Affichez les informations de l'animal inconnu
    unknownAnimal.printInfo();

    // Créez un objet Mammal
    Mammal lion("Leo", "Golden", "Carnivore", "Grassland", false, 5, 180.5, 3.5, "Tawny");

    // Affichez les informations du lion
    lion.printInfo();

    // Créez un objet Bird
    Bird eagle("Baldy", "Brown", "Carnivore", "Sky", false, 10, 5.2, 150.0, 2.0);

    // Affichez les informations de l'aigle
    eagle.printInfo();

    // Créez un objet Reptile
    Reptile snake("Sly", "Green", "Carnivore", "Swamp", false, 2, 1.5, 10.0, "Striped");

    // Affichez les informations du serpent
    snake.printInfo();

    // Créez un vecteur d'animaux pour stocker différents types d'animaux
    std::vector<Animal*> zooAnimals;
    zooAnimals.push_back(&lion);
    zooAnimals.push_back(&eagle);
    zooAnimals.push_back(&snake);

    // Affichez les informations de tous les animaux du zoo
    for (const Animal* animal : zooAnimals) {
        animal->printInfo();
    }

    return 0;
}
