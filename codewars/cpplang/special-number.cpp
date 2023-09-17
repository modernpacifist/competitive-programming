#include <cstdio>
#include <iostream>
#include <vector>


const char* specialNumber(int n) {
    bool flag = true;

    while (n > 0) {
        if (n % 10 > 5) {
            flag = false;
            break;
        }
        n /= 10;
    }

    return (flag) ? "Special!!" : "NOT!!";
}


int main() {
    std::cout << specialNumber(2) << std::endl;
    std::cout << specialNumber(3) << std::endl;
    std::cout << specialNumber(9) << std::endl;
    std::cout << specialNumber(23) << std::endl;

    return 0;
}
