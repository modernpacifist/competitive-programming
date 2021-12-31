#include <iostream>


double getVolumeOfCubiod(double length, double width, double height) {
    return length * width * height;
}


int main() {
    std::cout << getVolumeOfCubiod(1, 2, 2) << std::endl;

    return 0;
}
