#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h" // Assurez-vous d'inclure la classe Animal

class Mammal : public Animal {
private:
    std::string furColor;

public:
    Mammal(); // Constructeur par défaut
    Mammal(std::string name, std::string color, std::string diet, std::string habitat, bool isPet, int age, double weight, double height, std::string furColor);

    // Getter et Setter pour furColor
    std::string getFurColor() const;
    void setFurColor(std::string furColor);

    // Fonction pour afficher les informations spécifiques à Mammal
    void printInfo() const override;
};

#endif
