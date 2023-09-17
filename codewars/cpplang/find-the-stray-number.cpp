#include <iostream>
#include <vector>


int stray(std::vector<int> n) {
    int res = 0;
    for (auto i : n) {
        res ^= i;
    }
    return res;
}


int main() {
    std::cout << stray({1, 1, 2}) << std::endl;

    return 0;
}
