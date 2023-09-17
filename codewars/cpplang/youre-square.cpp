#include <iostream>
#include <cmath>


bool is_square(int n) {
    return (sqrt(n) - floor(sqrt(n)) == 0);
}


int main() {
    std::cout << is_square(25) << std::endl;
    std::cout << is_square(-1) << std::endl;
    
    return 0;
}
