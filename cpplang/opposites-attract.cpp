#include <iostream>


bool lovefunc(int f1, int f2) {
    return (f1 + f2) % 2;
}


int main() {
    std::cout << lovefunc(1, 2) << std::endl;
    
    return 0;
}
