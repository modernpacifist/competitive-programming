/*
 * Determine the area of the largest square that can fit inside a circle with radius r.
 */
#include <iostream>


int area_largest_square(int r) {
    return 2 * r * r;
}


int main() {
    std::cout << area_largest_square(5) << std::endl;
    
    return 0;
}
