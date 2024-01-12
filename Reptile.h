#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

class Reptile : public Animal {
private:
    std::string scalePattern;

public:
    Reptile();
    Reptile(std::string name, std::string color, std::string diet, std::string habitat, bool isPet, int age, double weight, double height, std::string scalePattern);

    // Getter and Setter for scalePattern
    std::string getScalePattern() const;
    void setScalePattern(std::string scalePattern);

    // Override the printInfo function
    virtual void printInfo() const override;
};

#endif // REPTILE_H
