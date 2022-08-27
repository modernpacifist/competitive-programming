#include <iostream>


int divisors(int n) {
    int counter {0}, divisor {n};

    while (divisor > 0) {
        if (n % divisor == 0) {
            counter++;
            divisor--;
            continue;
        } else {
            divisor--;
            continue;
        }
    }

    return counter;
}


int main() {
    std::cout << divisors(5) << std::endl;
    
    return 0;
}
