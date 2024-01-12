#include "KNNDouble.h"
#include <cmath>

KNNDouble::KNNDouble(int k) : KNN<std::pair<double, double>>(k) {}

double KNNDouble::similarityMeasure(std::pair<double, double>& a, std::pair<double, double>& b) {
    // Euclidean distance between two pairs of doubles
    double dx = a.first - b.first;
    double dy = a.second - b.second;
    return std::sqrt(dx * dx + dy * dy);
}
