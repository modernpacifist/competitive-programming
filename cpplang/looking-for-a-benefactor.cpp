#include <iostream>
#include <vector>
#include <cmath>
#include <stdexcept>


class NewAverage {
public:
    static long long newAvg(std::vector<double> &arr, double navg) {
        double sum = 0;

        for (size_t i = 0; i < arr.size(); ++i) {
            sum += arr.at(i);
        }

        double h = navg * (arr.size() + 1) - sum;
        std::cout << "h: " << h << std::endl;

        if (h <= 0) {
            throw std::logic_error("Wrong value");
        }

        return h;
    };
};


int main() {
    std::vector<double> arr1 = {14.0, 30.0, 5.0, 7.0, 9.0, 11.0, 16.0};
    std::cout << NewAverage::newAvg(arr1, 90)<< std::endl;

    std::vector<double> arr2 = {14, 30, 5, 7, 9, 11, 15};
    std::cout << NewAverage::newAvg(arr1, 92)<< std::endl;

    std::vector<double> arr3 = {14, 30, 5, 7, 9, 11, 15};
    std::cout << NewAverage::newAvg(arr1, 2)<< std::endl;

    return 0;
}
