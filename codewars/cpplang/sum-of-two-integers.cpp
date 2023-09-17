/*
 *kGiven Two integers a , b , find The sum of them , BUT You are not allowed to use the operators + and -
 */

#include <iostream>


int Add(int x, int y) {
    int carry;
    while (y != 0) {
        carry = x & y;
        x = x ^ y;
        y = carry << 1;
    }
    return x;
}


int main() {
    std::cout << Add(1, 2) << std::endl;
    std::cout << Add(5, 19) << std::endl;
    std::cout << Add(23, 17) << std::endl;

    return 0;
}
