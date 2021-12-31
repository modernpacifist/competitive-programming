#include <iostream>
#include <cmath>


bool PythagoreanTriple(const int a, const int b, const int c) {
    return (c * c == a * a + b * b);
}


int main() {
    std::cout << PythagoreanTriple(3, 4, 5) << std::endl;
    std::cout << PythagoreanTriple(5, 3, 4) << std::endl;
    
    return 0;
}
