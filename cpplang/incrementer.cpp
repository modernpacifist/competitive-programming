#include <iostream>
#include <vector>


std::vector<int> incrementer(std::vector<int> nums){
    for (size_t i = 0, j = 1; i < nums.size(); ++i, ++j) {
        nums.at(i) += j;
        if (nums.at(i) > 9) {
            nums.at(i) %= 10;
        }
    }
    return nums;
}


int main() {
    std::vector<int> n = {1, 2, 3};

    for (auto i : incrementer(n)) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    n = {4, 6, 9, 1, 3};
    for (auto i : incrementer(n)) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
