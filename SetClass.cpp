#include "SetClass.hpp"

SetClass::SetClass() {
    numReps = 0;
    weight = 0;

    calculateTotalWeight();
}

SetClass::SetClass(int newNumReps, double newWeight) {
    numReps = newNumReps;
    weight = newWeight;

    calculateTotalWeight();
}

int SetClass::getNumReps() {
    return numReps;
}

double SetClass::getWeight() {
    return weight;
}

double SetClass::getTotalWeight() {
    return totalWeight;
}

void SetClass::setNumReps(int newNumReps) {
    numReps = newNumReps;
    
    calculateTotalWeight();
}

void SetClass::setWeight(double newWeight) {
    weight = newWeight;

    calculateTotalWeight();
}

void SetClass::calculateTotalWeight() {
    totalWeight = weight * numReps;
}