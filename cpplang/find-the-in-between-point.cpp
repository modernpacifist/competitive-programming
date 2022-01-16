TODO: FINISH THIS TASK
#include <iostream>


bool inRange(int low, int x, int high) {        
    return ((x-high)*(x-low) <= 0);
}        


unsigned middle_point(double x1, double y1, double z1,
                      double x2, double y2, double z2,
                      double x3, double y3, double z3) {
    if (
            (inRange(x1, x2, x3) && inRange(y1, y2, y3) && inRange(z1, z2, z3)) ||
            (inRange(x3, x2, x1) && inRange(y3, y2, y1) && inRange(z3, z2, z1))
        ) {
        return 2;
    }
    if (
            (inRange(x1, x3, x2) && inRange(y1, y3, y2) && inRange(z1, z3, z2)) ||
            (inRange(x2, x3, x1) && inRange(y2, y3, y1) && inRange(z2, z3, z1))
        ) {
        return 3;
    }
    if (
            (inRange(x3, x1, x2) && inRange(y3, y1, y2) && inRange(z3, z1, z2)) ||
            (inRange(x2, x1, x3) && inRange(y2, y1, y3) && inRange(z2, z1, z3))
            ) {
        return 1;
    }
    else {
        return 0;
    }
}


int main() {
    std::cout << middle_point(0,2,0, 9,-4,12, 3,0,4) << std::endl;
    std::cout << middle_point(1,0,4, 5,0,6, -7,0,0) << std::endl;
    std::cout << middle_point(-1,0,2, -2,4,-1, -3,8,-4) << std::endl;

    return 0;
}
