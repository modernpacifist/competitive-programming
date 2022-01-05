#include <iostream>
#include <cstdint>
#include <cmath>


std::uint32_t hamming_distance(std::uint32_t a, std::uint32_t b) {
    return __builtin_popcount(a ^ b);
}


int main() {
    std::cout << hamming_distance(12, 15) << std::endl;
    std::cout << hamming_distance(25, 87) << std::endl;
    
    return 0;
}
