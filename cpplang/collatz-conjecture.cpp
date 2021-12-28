#include <iostream>


unsigned int hotpo(unsigned int n) {
    if (n == 0) {
        return 0;
    } 

    int counter = 0;
    for (size_t i = n; i > 1;) {
        if (i % 2 == 0) {
            i /= 2;
            counter++;
        } else {
            i = 3 * i + 1;
            counter++;
        }
    }
    return counter;
}


int main() {
    std::cout << hotpo(5) << std::endl;
    
    return 0;
}
