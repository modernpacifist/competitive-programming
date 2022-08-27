#include <iostream>
#include <cmath>


unsigned int cookingTime(unsigned int eggs) {
    return ceil(eggs / 8.0) * 5;
}


int main() {
    std::cout << cookingTime(8) << std::endl;

    return 0;
}
