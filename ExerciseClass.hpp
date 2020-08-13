#ifndef EXERCISE_CLASS_HPP
#define EXERCISE_CLASS_HPP

#include <string>
#include <vector>
#include "ErrorCode.hpp"
#include "SetClass.hpp"

class ExerciseClass {
    public:
        /// @brief ExerciseClass
        //
        /// @param None
        //
        /// @return None
        ExerciseClass();

        /// @brief ExerciseClass
        //
        /// @param [std::string] inputExerciseName: Name of the exercise
        /// @param [int] inputNumSets: Number of sets of the exercise completed
        //
        /// @return None
        ExerciseClass(std::string inputExerciseName, int inputNumSets);

        /// @brief getName
        //
        /// @param None
        //
        /// @return [std::string] exerciseName: The name of the exercise
        std::string getName();

        /// @brief getNumSets
        //
        /// @param None
        //
        /// @return [int] numSets: The number of sets of the exercise done
        int getNumSets();

        /// @brief getSetNumber
        //
        /// @param [int] setNumber: The number of the set to be retrieved
        //
        /// @return [SetClass] set: The SetClass object assigned to setNumber
        SetClass getSetNumber(int setNumber);

        /// @brief getRepsOfSet
        //
        /// @param [int] setNumber: The number of the set whose number of reps are desired
        //
        /// @return [int] numReps: The number of reps for the set number setNumber
        int getRepsOfSet(int setNumber);

        /// @brief getWeightOfSet
        //
        /// @param [int] setNumber: The number of the set whose weight is desired
        //
        /// @return [double] setWeight: The amount of weight used in the specified set
        double getWeightOfSet(int setNumber);

        /// @brief clearData
        //
        /// @param None
        //
        /// @return None
        void clearData();

        /// @brief setName
        //
        /// @param [std::string] newExerciseName: The new name of the exercise
        //
        /// @return None
        void setName(std::string newExerciseName);

        /// @brief setNumSets
        //
        /// @param [int] newNumSets: The new number of sets in the exercise
        //
        /// @return None
        void setNumSets(int newNumSets);

        /// @brief setRepsOfSet
        //
        /// @param [int] setNumber: The number of the set whose value you are changing
        /// @param [int] numReps: The number of reps to be assigned to the set
        //
        /// @return None
        void setRepsOfSet(int setNumber, int numReps);

        /// @brief setRepsOfSet
        //
        /// @param [int] setNumber: The number of the set whose value you are changing
        /// @param [double] weight: The amount of weight to be assigned to the set
        //
        /// @return None
        void setWeightOfSet(int setNumber, double weight);

        /// @brief addSet
        //
        /// @param None
        //
        /// @return None
        void addSet();

    protected:

    private:
        std::string exerciseName;
        int numSets;
        std::vector<SetClass> setObjects;
};

#endif // EXERCISE_CLASS_HPP