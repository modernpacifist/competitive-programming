#include <vector>
#include <iostream>
#include <algorithm>

using namespace std; 


int count_sheep(vector<bool> arr) {
    int counter = 0;
    for (auto i : arr) {
        if (i == true) {
            ++counter;
        } else {
            continue;
        }
    }
    return counter;
}


int count_sheep1(vector<bool> arr) {
    return std::count(arr.begin(), arr.end(), true);
}


int main() {
    vector<bool> array1 = {
        true,  true,  true,  false,
        true,  true,  true,  true,
        true,  false, true,  false,
        true,  false, false, true,
        true,  true,  true,  true,
        false, false, true,  true
    };

    std::cout << count_sheep(array1) << std::endl;
    std::cout << count_sheep1(array1) << std::endl;

    return 0;
}