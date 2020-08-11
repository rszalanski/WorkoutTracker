#ifndef SET_CLASS_HPP
#define SET_CLASS_HPP

class SetClass {
    public:
        /// @brief SetClass
        //
        /// @param None
        //
        /// @return None
        SetClass();

        /// @brief SetClass
        //
        /// @param [int] newNumReps: The number of reps completed in the set
        /// @param [double] newWeight: The amount of weight used per rep in the set
        //
        /// @return None
        SetClass(int newNumReps, double newWeight);

        /// @brief getNumReps
        //
        /// @param None
        //
        /// @return [int] numReps: The number of reps completed in the set
        int getNumReps();

        /// @brief getWeight
        //
        /// @param None
        //
        /// @return [double] weight: The amount of weight used per rep in the set
        double getWeight();

        /// @brief getTotalWeight
        //
        /// @param None
        //
        /// @return [double] totalWeight: The total weight lifted during the set
        double getTotalWeight();

        /// @brief setNumReps
        //
        /// @param [int] newNumReps: The number of reps to be set as completed in the set
        //
        /// @return None
        void setNumReps(int newNumReps);

        /// @brief setWeight
        //
        /// @param [double] newWeight: The amount of weight to be set as used per rep in the set
        //
        /// @return None
        void setWeight(double newWeight);

    protected:
    private:
        /// @brief calculateTotalWeight
        //
        /// @param None
        //
        /// @return None
        void calculateTotalWeight();

        int numReps;
        double weight;
        double totalWeight;
};

#endif // SET_CLASS_HPP