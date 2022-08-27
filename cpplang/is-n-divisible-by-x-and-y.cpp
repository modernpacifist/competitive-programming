#include <iostream>


bool isDivisible(int n, int x, int y) {
    return ((n % x == 0) && (n % y == 0));
}


int main() {

    std::cout << isDivisible(3, 3, 4) << std::endl;

    return 0;
}
