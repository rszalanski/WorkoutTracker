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
        /// @param [std::vector<int>] inputRepsPerSet: Number of reps per set of the exercise
        /// @param [std::vector<double>] inputWeightPerSet: Amount of weight used per set of the exercise
        //
        /// @return None
        ExerciseClass(std::string inputExerciseName,
                      int inputNumSets,
                      std::vector<int> inputRepsPerSet,
                      std::vector<double> inputWeightPerSet);

        /// @brief getExerciseName
        //
        /// @param None
        //
        /// @return [std::string] exerciseName: The name of the exercise
        std::string getExerciseName();

        /// @brief getNumSets
        //
        /// @param None
        //
        /// @return [int] numSets: The number of sets of the exercise done
        int getNumSets();

        /// @brief getRepsPerSet
        //
        /// @param None
        //
        /// @return [std::vector<int>] repsPerSet: A vector of the number of reps for each set of the exercise
        std::vector<int> getRepsPerSet();

        /// @brief getRepsOfSet
        //
        /// @param [int] setNumber: The number of the set whose number of reps are desired
        //
        /// @return [int] numReps: The number of reps for the set number setNumber
        int getRepsOfSet(int setNumber);

        /// @brief getWeightPerSet
        //
        /// @param None
        //
        /// @return [std::vector<double>] weightPerSet: A vector of the amount of weight for each set of the exercise
        std::vector<double> getWeightPerSet();

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

        /// @brief setExerciseName
        //
        /// @param [std::string] newExerciseName: The new name of the exercise
        //
        /// @return None
        void setExerciseName(std::string newExerciseName);

        /// @brief setNumSets
        //
        /// @param [int] newNumSets: The new number of sets in the exercise
        //
        /// @return None
        void setNumSets(int newNumSets);

        /// @brief setRepsPerSet
        //
        /// @param [std::vector<int>] newRepsPerSet: A vector of the new numbers of reps for each set of the exercise
        //
        /// @return None
        void setRepsPerSet(std::vector<int> newRepsPerSet);

        /// @brief setWeightPerSet
        //
        /// @param [std::vector<double>] newWeightPerSet: A vector of the new weights for each set of the exercise
        //
        /// @return None
        void setWeightPerSet(std::vector<double> newWeightPerSet);

    protected:

    private:
        /// @brief appendReps
        //
        /// @param [int] numReps: The number of reps to be appended to repsPerSet
        //
        /// @return None
        void appendReps(int numReps);

        /// @brief clearReps
        //
        /// @param None
        //
        /// @return None
        void clearReps();

        /// @brief appendWeight
        //
        /// @param [double] weight: The weight to be appended to weightPerSet
        //
        /// @return None
        void appendWeight(double weight);

        /// @brief clearWeight
        //
        /// @param None
        //
        /// @return None
        void clearWeight();

        std::string exerciseName;
        int numSets;
        std::vector<int> repsPerSet;
        std::vector<double> weightPerSet;
};

#endif // EXERCISE_CLASS_HPP