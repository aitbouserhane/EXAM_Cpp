#ifndef KNNSTRING_H
#define KNNSTRING_H

#include "KNN.h"
#include <vector>
#include <string>

class KNNString : public KNN<std::vector<std::string>> {
public:
    KNNString(int k);

    // Override the similarity measure for vectors of strings
    double similarityMeasure(std::vector<std::string>& a, std::vector<std::string>& b) override;
};

#endif // KNNSTRING_H
