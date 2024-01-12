#ifndef KNN_H
#define KNN_H

#include <vector>

template <typename T>
class KNN {
private:
    int k;

public:
    // Constructors
    KNN();
    KNN(int k);
    
    // Getter for k
    int getK() const;

    // Find the k-nearest neighbors
    std::vector<int> findNearestNeighbors(std::vector<T>& trainData, T& target);

    // Virtual function for similarity measure
    virtual double similarityMeasure(T& a, T& b) = 0;
};

#endif // KNN_H
