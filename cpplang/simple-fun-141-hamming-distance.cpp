#include <iostream>
#include <cstdint>
#include <cmath>


std::uint32_t hamming_distance(std::uint32_t a, std::uint32_t b) {
    std::uint32_t r = 0, c = (a ^ b);
    while (c) {
        r += c & 1;
        c >>= 1;
    }
    return r;
}


int main() {
    std::cout << hamming_distance(12, 15) << std::endl;
    //std::cout << hamming_distance(25, 87) << std::endl;
    
    return 0;
}
