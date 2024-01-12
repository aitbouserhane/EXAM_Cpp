#include "KNN.h"
#include <algorithm>
#include <vector>

template <typename T>
KNN<T>::KNN() : k(1) {}

template <typename T>
KNN<T>::KNN(int k) : k(k) {}

template <typename T>
int KNN<T>::getK() const {
    return k;
}

template <typename T>
std::vector<int> KNN<T>::findNearestNeighbors(std::vector<T>& trainData, T& target) {
    std::vector<int> neighbors;
    std::vector<double> distances;

    for (int i = 0; i < trainData.size(); i++) {
        double distance = similarityMeasure(trainData[i], target);
        distances.push_back(distance);
    }

    // Find the indices of the k nearest neighbors
    for (int i = 0; i < k; i++) {
        auto minIt = std::min_element(distances.begin(), distances.end());
        int index = std::distance(distances.begin(), minIt);
        neighbors.push_back(index);
        distances[index] = std::numeric_limits<double>::max(); // Mark as visited
    }

    return neighbors;
}
