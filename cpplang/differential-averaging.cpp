#include <iostream>


double addToAverage(double current, int points, double add) {
    return (current * points + add) / (points + 1);
}


int main() {
    std::cout << addToAverage(0, 0, 1) << std::endl;
    std::cout << addToAverage(0.5, 2, 1) << std::endl;
    std::cout << addToAverage(1.5, 2, 3) << std::endl;
    
    return 0;
}
