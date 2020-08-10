#include <iostream>
#include "ErrorCode.hpp"

ErrorCode testWorkoutClass() {
    return ErrorCode::NO_ERROR;
}

int main() {
    std::cout << static_cast<int>(testWorkoutClass());

    int x;
    std::cin >> x;

    return 0;
}