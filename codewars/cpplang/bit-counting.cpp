#include <iostream>
#include <vector>
#include <bits/stdc++.h>


// my codewars submitted solution
unsigned int countBits(unsigned long long n){
    return __builtin_popcountl(n);
}


// my solution
unsigned int countBits1(unsigned long long n){
    std::vector<int> res;
    while (n > 0) {
        res.push_back(n % 2);
        n /= 2;
    }
    return std::count(res.begin(), res.end(), 1);
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

    std::cout << std::endl;

    std::cout << (countBits1(0) == 0) << std::endl;
    std::cout << (countBits1(4) == 1) << std::endl;
    std::cout << (countBits1(7) == 3) << std::endl;
    std::cout << (countBits1(9) == 2) << std::endl;
    std::cout << (countBits1(10) == 2) << std::endl;
    std::cout << (countBits1(26) == 3) << std::endl;
    std::cout << (countBits1(77231418) == 14) << std::endl;
    std::cout << (countBits1(12525589) == 11) << std::endl;
    std::cout << (countBits1(3811) == 8) << std::endl;
    std::cout << (countBits1(392902058) == 17) << std::endl;
    std::cout << (countBits1(788744655421502) == 24) << std::endl;

    return 0;
}
