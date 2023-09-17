#include <iostream>
#include <cmath>


int layers(int n) {
    int layer = 1, j = 1;

    for (int i = 1; i < n; ++i) {
        if (i >= j * j) {
            j += 2;
            layer++;
        }
    }

    return layer;
}


int main() {
    std::cout << layers(1) << std::endl;
    std::cout << layers(5) << std::endl;
    std::cout << layers(25) << std::endl;
    std::cout << layers(30) << std::endl;
    std::cout << layers(50) << std::endl;
    
    return 0;
}
