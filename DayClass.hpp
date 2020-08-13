#ifndef DAY_CLASS_HPP
#define DAY_CLASS_HPP

#include <string>
#include <vector>
#include "WorkoutClass.hpp"

class DayClass {
    public:
        /// @brief DayClass
        //
        /// @param None
        //
        /// @return None
        DayClass();

        /// @brief DayClass
        //
        /// @param [int] newNumWorkouts: The number of workouts to be assigned to the day
        /// @param [int] newDay: The integer representation of the day of the month
        /// @param [int] newMonth: The integer representation of the month of the year
        /// @param [int] newYear: The integer representation of the year
        //
        /// @return None
        DayClass(int newNumWorkouts, int newDay, int newMonth, int newYear);

        /// @brief getNumWorkouts
        //
        /// @param None
        //
        /// @return [int] numWorkouts: The number of workouts completed in the day
        int getNumWorkouts();

        /// @brief getDate
        //
        /// @param None
        //
        /// @return [std::string] date: The string representation of the date assigend to the DayClass object
        std::string getDate();

        /// @brief getWorkoutNumber
        //
        /// @param [int] workoutNumber: The number of the WorkoutClass object to retrieve
        //
        /// @return [WorkoutClass] workout: The WorkoutClass object assigned to workoutNumber
        WorkoutClass getWorkoutNumber(int workoutNumber);

        /// @brief getNumExercisesInWorkout
        //
        /// @param [int] workoutNumber: The number of the workout whose number of exercises is requested
        //
        /// @return [int] numExercises: The number of exercises in the specified workout number
        int getNumExercisesInWorkout(int workoutNumber);

        /// @brief setNumWorkouts
        //
        /// @param [int] newNumWorkouts: The new number of workouts to be assigned to the day
        //
        /// @return None
        void setNumWorkouts(int newNumWorkouts);

        /// @brief setDay
        //
        /// @param [int] newDay: The integer representation of the day
        //
        /// @return None
        void setDay(int newDay);

        /// @brief setMonth
        //
        /// @param [int] newMonth: The integer representation of the month
        //
        /// @return None
        void setMonth(int newMonth);

        /// @brief setYear
        //
        /// @param [int] newYear: The integer representation of the year
        //
        /// @return None
        void setYear(int newYear);

        /// @brief addWorkout
        //
        /// @param None
        //
        /// @return None
        void addWorkout();
    protected:
    private:
        /// @brief updateDate
        //
        /// @param None
        //
        /// @return None
        void updateDate();

        int numWorkouts;
        std::vector<WorkoutClass> workoutObjects;

        int day;
        int month;
        int year;
        std::string date;
};

#endif // DAY_CLASS_HPP