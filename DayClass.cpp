#include <string>
#include <vector>
#include "DayClass.hpp"
#include "WorkoutClass.hpp"

DayClass::DayClass() {
    numWorkouts = 0;

    day = 0;
    month = 0;
    year = 0;

    updateDate();
}

DayClass::DayClass(int newNumWorkouts, int newDay, int newMonth, int newYear) {
    numWorkouts = newNumWorkouts;

    day = newDay;
    month = newMonth;
    year = newYear;

    updateDate();
}

int DayClass::getNumWorkouts() {
    return numWorkouts;
}

std::string DayClass::getDate() {
    return date;
}

WorkoutClass DayClass::getWorkoutNumber(int workoutNumber) {
    return workoutObjects[workoutNumber];
}

int DayClass::getNumExercisesInWorkout(int workoutNumber) {
    return workoutObjects[workoutNumber].getNumExercises();
}

void DayClass::setNumWorkouts(int newNumWorkouts) {
    // Append empty workouts if newNumWorkouts > numWorkouts
    if(newNumWorkouts > numWorkouts)
    {
        for(int workoutNumber = numWorkouts; workoutNumber < newNumWorkouts; workoutNumber++)
        {
            workoutObjects.push_back(WorkoutClass());
        }
    }

    // Pop WorkoutClass objects from exerciseObjects if newNumWorkouts < numWorkouts
    else if(newNumWorkouts < numWorkouts)
    {
        for(int workoutNumber = numWorkouts; workoutNumber > newNumWorkouts; workoutNumber--)
        {
            workoutObjects.pop_back();
        }
    }

    numWorkouts = newNumWorkouts;
}

void DayClass::setDay(int newDay) {
    day = newDay;

    updateDate();
}

void DayClass::setMonth(int newMonth) {
    month = newMonth;
    
    updateDate();
}

void DayClass::setYear(int newYear) {
    year = newYear;
    
    updateDate();
}

void DayClass::addWorkout() {
    workoutObjects.push_back(WorkoutClass());

    numWorkouts++;
}

void DayClass::updateDate() {
    std::string dayString = std::to_string(day);
    std::string monthString = std::to_string(month);
    std::string yearString = std::to_string(year);

    date = monthString + '/' + dayString + '/' + yearString;
}