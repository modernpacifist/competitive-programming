#include <iostream>
#include <vector>
#include <numeric>


int sum(std::vector<int> nums) {
    return std::accumulate(nums.begin(), nums.end(), 0);
}


int main() {
    std::cout << sum(std::vector{1,2,3}) << '\n';
    
    return 0;
}
