#include "SetClass.hpp"

SetClass::SetClass() {
    numReps = 0;
    weight = 0;
}

SetClass::SetClass(int newNumReps, double newWeight) {
    numReps = newNumReps;
    weight = newWeight;
}

int SetClass::getNumReps() {
    return numReps;
}

double SetClass::getWeight() {
    return weight;
}

void SetClass::setNumReps(int newNumReps) {
    numReps = newNumReps;
}

void SetClass::setWeight(double newWeight) {
    weight = newWeight;
}