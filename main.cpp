#include <iostream>
#include <string>
#include <vector>
#include "DayClass.hpp"
#include "ErrorCode.hpp"
#include "ExerciseClass.hpp"
#include "SetClass.hpp"
#include "WorkoutClass.hpp"

DayClass setupToday() {
    DayClass Today;

    Today.setDay(12);
    Today.setMonth(8);
    Today.setYear(2020);

    Today.addWorkout();

    return Today;
}

WorkoutClass setupWorkout1(DayClass Today) {
    WorkoutClass Workout1 = Today.getWorkoutNumber(0);

    std::cout << Today.getDate() << "======================================\n";

    Workout1.setNumExercises(6);

    std::vector<ExerciseClass> Exercises;

    std::string exerciseNames[] = {"Dumbbell Bench Press", "Incline Dumbbell Bench Press", "Dumbbell Floor Press", "Standing Dumbbell Press",
                                   "Dumbbell Lateral Raise", "Dumbbell Tricep Kickback"};

    for(int exerciseNumber = 0; exerciseNumber < 6; exerciseNumber++)
    {
        ExerciseClass CurrentExercise = Workout1.getExerciseNumber(exerciseNumber);
        CurrentExercise.setNumSets(5);
        CurrentExercise.setName(exerciseNames[exerciseNumber]);

        std::cout << "\tExercise #" << exerciseNumber+1 << ":\n";
        std::cout << "\t\t" << CurrentExercise.getName() << ":\n";

        for(int setNumber = 0; setNumber < CurrentExercise.getNumSets(); setNumber++)
        {
            SetClass CurrentSet = CurrentExercise.getSetNumber(setNumber);
            CurrentSet.setNumReps(10);
            CurrentSet.setWeight(15);

            std::cout << "\t\t\tSet #" << setNumber+1 << ":\n";
            std::cout << "\t\t\t\t# Reps: " << CurrentSet.getNumReps() << '\n';
            std::cout << "\t\t\t\tWeight: " << CurrentSet.getWeight() << " lbs\n";
            std::cout << "\t\t\t\t Total: " << CurrentSet.getTotalWeight() << " lbs\n";
        }
    }

    return Workout1;
}

void testDayClass() {
    DayClass Today = setupToday();

    WorkoutClass Workout1 = setupWorkout1(Today);
}

int main() {
    testDayClass();

    return 0;
}