#include <iostream>


unsigned int countBits(unsigned long long n){
    return __builtin_popcountl(n);
}


int main() {
    std::cout << (countBits(0) == 0) << std::endl;
    std::cout << (countBits(4) == 1) << std::endl;
    std::cout << (countBits(7) == 3) << std::endl;
    std::cout << (countBits(9) == 2) << std::endl;
    std::cout << (countBits(10) == 2) << std::endl;
    std::cout << (countBits(26) == 3) << std::endl;
    std::cout << (countBits(77231418) == 14) << std::endl;
    std::cout << (countBits(12525589) == 11) << std::endl;
    std::cout << (countBits(3811) == 8) << std::endl;
    std::cout << (countBits(392902058) == 17) << std::endl;
    std::cout << (countBits(788744655421502) == 24) << std::endl;
    
    return 0;
}
