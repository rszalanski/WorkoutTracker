#ifndef WORKOUT_CLASS_HPP
#define WORKOUT_CLASS_HPP

#include <vector>
#include "ExerciseClass.hpp"

class WorkoutClass {
    public:
        /// @brief WorkoutClass
        //
        /// @param None
        //
        /// @return None
        WorkoutClass();

        /// @brief WorkoutClass
        //
        /// @param [int] newNumExercises: The number of exercises to be assigned to the workout
        //
        /// @return None
        WorkoutClass(int newNumExercises);

        /// @brief getNumExercises
        //
        /// @param None
        //
        /// @return [int] numExercises: The number of exercises in the workout
        int getNumExercises();

        /// @brief getExerciseNumber
        //
        /// @param [int] exerciseNumber: The number of the exercise to be retrieved
        //
        /// @return [ExerciseClass] exercise: The ExerciseClass object assigned to exerciseNumber
        ExerciseClass getExerciseNumber(int exerciseNumber);

        /// @brief getNameOfExercise
        //
        /// @param [int] exerciseNumber: The number of the exercise whose name is requested
        //
        /// @return [std::string] exerciseName: The name of the exercise numbered exerciseNumber
        std::string getNameOfExercise(int exerciseNumber);

        /// @brief getSetsOfExercise
        //
        /// @param [int] exerciseNumber: The number of the exercise whose number of sets is requested
        //
        /// @return [int] numSets: The number of sets completed in exercise number exerciseNumber
        int getSetsOfExercise(int exerciseNumber);

        /// @brief setNumExercises
        //
        /// @param [int] newNumExercises: The number of exercises to assign to the workout
        //
        /// @return None
        void setNumExercises(int newNumExercises);

        /// @brief setNameOfExercise
        //
        /// @param [int] exerciseNumber: The number of the exercise to assign the name exerciseName to
        /// @param [std::string] exerciseName: The new name to assign to the exercise numbered exerciseNumber
        //
        /// @return None
        void setNameOfExercise(int exerciseNumber, std::string exerciseName);

        /// @brief setSetsOfExercise
        //
        /// @param [int] exerciseNumber: The number of the exercise to assign the number of completed sets to
        /// @param [int] numSets: The number of completed sets to assign to the exercise
        //
        /// @return None
        void setSetsOfExercise(int exerciseNumber, int numSets);

        /// @brief addExercise
        //
        /// @param None
        //
        /// @return None
        void addExercise();
    protected:

    private:
        int numExercises;
        std::vector<ExerciseClass> exerciseObjects;
};

#endif // WORKOUT_CLASS_HPP