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

    int fakeNumSets = 3;
    std::string fakeName = "Deadlift";
    std::vector<int> fakeReps = {1,2,3};
    std::vector<double> fakeWeights = {10,20,30};

    int setIndex = 2;

    ExerciseClass testExercise(fakeName, fakeNumSets);
    
    for(int setNumber = 0; setNumber < fakeNumSets; setNumber++)
    {
        testExercise.setRepsOfSet(setNumber, fakeReps[setNumber]);
        testExercise.setWeightOfSet(setNumber, fakeWeights[setNumber]);
    }

    std::cout << "OLD==================================================\n";
    std::cout << "Exercise: " << testExercise.getName() << '\n';
    std::cout << "# of Sets: " << testExercise.getNumSets() << '\n';
    std::cout << "# of reps in set " << setIndex << ": " << testExercise.getRepsOfSet(setIndex) << '\n';
    std::cout << "Weight used in set " << setIndex << ": " << testExercise.getWeightOfSet(setIndex) << '\n';

    testExercise.setName(exerciseName);
    testExercise.setNumSets(numSets);

    for(int setNumber = 0; setNumber < numSets; setNumber++)
    {
        testExercise.setRepsOfSet(setNumber, repsPerSet[setNumber]);
        testExercise.setWeightOfSet(setNumber, weightPerSet[setNumber]);
    }

    std::cout << "NEW==================================================\n";
    std::cout << "Exercise: " << testExercise.getName() << '\n';
    std::cout << "# of Sets: " << testExercise.getNumSets() << '\n';
    std::cout << "# of reps in set " << setIndex << ": " << testExercise.getRepsOfSet(setIndex) << '\n';
    std::cout << "Weight used in set " << setIndex << ": " << testExercise.getWeightOfSet(setIndex) << '\n';
}

int main() {
    testWorkoutClass();

    return 0;
}