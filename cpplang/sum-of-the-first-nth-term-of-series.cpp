#include <iostream>
#include <cstring>


std::string seriesSum(int n) {
    double real_num_result = 0;
    for (double i = 0; i < n; ++i) {
        real_num_result += 1/(1+i*3);
    }
    float value = ((int)(real_num_result * 100 + .5));
    return std::to_string((double)(value/100)).substr(0, 4);
}


int main() {
    std::cout << seriesSum(1) << std::endl;
    std::cout << seriesSum(2) << std::endl;
    std::cout << seriesSum(3) << std::endl;
    std::cout << seriesSum(5) << std::endl;

    return 0;
}