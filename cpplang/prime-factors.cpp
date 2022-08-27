#include <iostream>
#include <vector>
#include <cmath>


std::vector<int> prime_factors(long n){
    std::vector<int> res;

    while (n % 2 == 0) {
        res.push_back(2);
        n = n/2;
    }

    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            res.push_back(i);
            n /= i;
        }
    }

    if (n > 2) {
        res.push_back(n);
    }

    return res;
}


int main() {
    for (auto i : prime_factors(8)) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    for (auto i : prime_factors(9)) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    for (auto i : prime_factors(12)) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
