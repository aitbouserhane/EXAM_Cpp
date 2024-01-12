#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

class Bird : public Animal {
private:
    double wingspan;

public:
    Bird();
    Bird(std::string name, std::string color, std::string diet, std::string habitat, bool isPet, int age, double weight, double height, double wingspan);

    // Getter and Setter for wingspan
    double getWingspan() const;
    void setWingspan(double wingspan);

    // Override the printInfo function
    virtual void printInfo() const override;
};

#endif // BIRD_H
