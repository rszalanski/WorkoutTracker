#include <string>
#include "ExerciseClass.hpp"
#include "WorkoutClass.hpp"

WorkoutClass::WorkoutClass() {
    numExercises = 0;
}

WorkoutClass::WorkoutClass(int newNumExercises) {
    numExercises = newNumExercises;

    for (int exerciseNumber = 0; exerciseNumber < numExercises; exerciseNumber++)
    {
        exerciseObjects.push_back(ExerciseClass());
    }
}

int WorkoutClass::getNumExercises() {
    return numExercises;
}

std::string WorkoutClass::getNameOfExercise(int exerciseNumber) {
    return exerciseObjects[exerciseNumber].getName();
}

int WorkoutClass::getSetsOfExercise(int exerciseNumber) {
    return exerciseObjects[exerciseNumber].getNumSets();
}

void WorkoutClass::setNumExercises(int newNumExercises) {
    // Append empty exercises if newNumExercises > numExercises
    if(newNumExercises > numExercises)
    {
        for(int exerciseNumber = numExercises; exerciseNumber < newNumExercises; exerciseNumber++)
        {
            exerciseObjects.push_back(ExerciseClass());
        }
    }

    // Pop ExerciseClass objects from exerciseObjects if newNumExercises < numExercises
    else if(newNumExercises < numExercises)
    {
        for(int exerciseNumber = numExercises; exerciseNumber > newNumExercises; exerciseNumber--)
        {
            exerciseObjects.pop_back();
        }
    }

    numExercises = newNumExercises;
}

void WorkoutClass::setNameOfExercise(int exerciseNumber, std::string exerciseName) {
    exerciseObjects[exerciseNumber].setName(exerciseName);
}

void WorkoutClass::setSetsOfExercise(int exerciseNumber, int numSets) {
    exerciseObjects[exerciseNumber].setNumSets(numSets);
}

void WorkoutClass::addExercise() {
    exerciseObjects.push_back(ExerciseClass());
}