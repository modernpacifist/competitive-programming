#include <iostream>
#include <cmath>


double areaOfPolygonInsideCircle(double r, int n) {
    const double PI =  3.14159265;
    return round(0.5 * pow(r, 2) * sin(2*PI/n)*n * 1000)/1000;
}


int main() {
    std::cout << areaOfPolygonInsideCircle(3, 3) << std::endl;
    std::cout << areaOfPolygonInsideCircle(2, 4) << std::endl;
    
    return 0;
}
