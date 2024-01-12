#ifndef KNNDOUBLE_H
#define KNNDOUBLE_H

#include "KNN.h"

class KNNDouble : public KNN<std::pair<double, double>> {
public:
    KNNDouble(int k);
    
    // Override the similarity measure for pairs of doubles
    double similarityMeasure(std::pair<double, double>& a, std::pair<double, double>& b) override;
};

#endif // KNNDOUBLE_H
