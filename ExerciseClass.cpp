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