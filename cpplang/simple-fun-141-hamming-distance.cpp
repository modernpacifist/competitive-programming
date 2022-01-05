#include <iostream>
#include <cstdint>
#include <cmath>


std::uint32_t hamming_distance(std::uint32_t a, std::uint32_t b) {
    int count = 0;
    for (int i = 0; i < 32; i++) {
        if (((a >> i) & 1) != ((b >> i) & 1)) {
            count++;
        }
    }
    return count;
}


int main() {
    std::cout << hamming_distance(25, 87) << std::endl;
    
    return 0;
}
