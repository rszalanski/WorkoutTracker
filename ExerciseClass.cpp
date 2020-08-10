#include <string>
#include <vector>
#include "ExerciseClass.hpp"

ExerciseClass::ExerciseClass() {
    exerciseName = "N/A";
    numSets = 0;
}

ExerciseClass::ExerciseClass(std::string inputExerciseName,
                             int inputNumSets,
                             std::vector<int> inputRepsPerSet,
                             std::vector<double> inputWeightPerSet) {
    exerciseName = inputExerciseName;
    numSets = inputNumSets;
    repsPerSet = inputRepsPerSet;
    weightPerSet = inputWeightPerSet;
}

std::string ExerciseClass::getExerciseName() {
    return exerciseName;
}

int ExerciseClass::getNumSets() {
    return numSets;
}

std::vector<int> ExerciseClass::getRepsPerSet() {
    return repsPerSet;
}

int ExerciseClass::getRepsOfSet(int setNumber) {
    return repsPerSet[setNumber];
}

std::vector<double> ExerciseClass::getWeightPerSet() {
    return weightPerSet;
}

double ExerciseClass::getWeightOfSet(int setNumber) {
    return weightPerSet[setNumber];
}

void ExerciseClass::clearData() {
    exerciseName = "N/A";
    numSets = 0;
    repsPerSet.clear();
    weightPerSet.clear();
}

void ExerciseClass::setExerciseName(std::string newExerciseName) {
    exerciseName = newExerciseName;
}

void ExerciseClass::setNumSets(int newNumSets) {
    numSets = newNumSets;
}

void ExerciseClass::setRepsPerSet(std::vector<int> newRepsPerSet) {
    this->clearReps();

    for (int setNumber(0); setNumber < numSets; setNumber++)
    {
        this->appendReps(newRepsPerSet[setNumber]);
    }
}

void ExerciseClass::setWeightPerSet(std::vector<double> newWeightPerSet) {
    this->clearWeight();

    for (int setNumber(0); setNumber < numSets; setNumber++)
    {
        this->appendWeight(newWeightPerSet[setNumber]);
    }
}

void ExerciseClass::appendReps(int numReps) {
    repsPerSet.push_back(numReps);
}

void ExerciseClass::clearReps() {
    repsPerSet.clear();
}

void ExerciseClass::appendWeight(double weight) {
    weightPerSet.push_back(weight);
}

void ExerciseClass::clearWeight() {
    weightPerSet.clear();
}