#include <string>
#include <vector>

class ExerciseClass {
    public:
        ExerciseClass();

        
    protected:
    private:
        std::string exerciseName;
        int numSets;
        std::vector<int> repsPerSet;
        std::vector<double> weightPerSetPtr;
}