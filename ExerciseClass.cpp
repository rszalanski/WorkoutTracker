#include <string>
#include <vector>
#include "ExerciseClass.hpp"

ExerciseClass::ExerciseClass() {
    exerciseName = "N/A";
    numSets = 0;
}

ExerciseClass::ExerciseClass(std::string inputExerciseName, int inputNumSets) {
    exerciseName = inputExerciseName;
    numSets = inputNumSets;
    
    for (int setNumber = 0; setNumber < numSets; setNumber++)
    {
        setObjects.push_back(SetClass());
    }
}

std::string ExerciseClass::getName() {
    return exerciseName;
}

int ExerciseClass::getNumSets() {
    return numSets;
}

SetClass ExerciseClass::getSetNumber(int setNumber) {
    return setObjects[setNumber];
}

int ExerciseClass::getRepsOfSet(int setNumber) {
    return setObjects[setNumber].getNumReps();
}

double ExerciseClass::getWeightOfSet(int setNumber) {
    return setObjects[setNumber].getWeight();
}

void ExerciseClass::clearData() {
    exerciseName = "N/A";
    numSets = 0;
    setObjects.clear();
}

void ExerciseClass::setName(std::string newExerciseName) {
    exerciseName = newExerciseName;
}

void ExerciseClass::setNumSets(int newNumSets) {
    // Append empty sets if newNumSets > numSets
    if(newNumSets > numSets) 
    {
        for(int setNumber = numSets; setNumber < newNumSets; setNumber++)
        {
            setObjects.push_back(SetClass());
        }
    }

    // Pop SetClass objects from setObjects if newNumSets < numSets
    else if(newNumSets < numSets)
    {
        for(int setNumber = numSets; setNumber > newNumSets; setNumber--)
        {
            setObjects.pop_back();
        }
    }

    numSets = newNumSets;
}

void ExerciseClass::setRepsOfSet(int setNumber, int numReps) {
    setObjects[setNumber].setNumReps(numReps);
}

void ExerciseClass::setWeightOfSet(int setNumber, double weight) {
    setObjects[setNumber].setWeight(weight);
}

void ExerciseClass::addSet() {
    setObjects.push_back(SetClass());
    numSets++;
}