#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>


double shortestDistance(double x, double y, double z) {
    double o = sqrt(pow((y + z), 2) + pow(x, 2));
    double t = sqrt(pow((x + z), 2) + pow(y, 2));
    double th = sqrt(pow((x + y), 2) + pow(z, 2));
    std::vector<double> a {o, t, th};

    return *std::min_element(a.begin(), a.end());
}


int main() {
    std::cout << shortestDistance(1, 2, 3) << std::endl;
    
    return 0;
}
