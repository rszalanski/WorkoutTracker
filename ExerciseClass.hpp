#ifndef EXERCISE_CLASS_HPP
#define EXERCISE_CLASS_HPP

#include <string>
#include <vector>

class ExerciseClass {
    public:
        ExerciseClass();

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

        
    protected:

    private:
        std::string exerciseName;
        int numSets;
        std::vector<int> repsPerSet;
        std::vector<double> weightPerSet;
};

#endif // EXERCISE_CLASS_HPP