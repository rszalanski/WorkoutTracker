#include <iostream>
#include <string>
#include <vector>
#include "ErrorCode.hpp"
#include "ExerciseClass.hpp"

void testWorkoutClass() {
    int numSets = 5;
    std::string exerciseName = "Bench Press";
    std::vector<int> repsPerSet = {10,10,5,10,10};
    std::vector<double> weightPerSet = {45,45,70,45,45};

    int setIndex = 2;

    ExerciseClass testExercise(exerciseName, numSets, repsPerSet, weightPerSet);

    std::cout << "Exercise: " << testExercise.getExerciseName() << '\n';
    std::cout << "# of Sets: " << testExercise.getNumSets() << '\n';
    std::cout << "# of reps in set " << setIndex << ": " << testExercise.getRepsOfSet(setIndex) << '\n';
    std::cout << "weight used in set " << setIndex << ": " << testExercise.getWeightOfSet(setIndex) << '\n';
}

int main() {
    testWorkoutClass();

    int x;
    std::cin >> x;

    return 0;
}