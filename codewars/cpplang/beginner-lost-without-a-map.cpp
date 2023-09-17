#include <iostream>
#include <vector>


std::vector<int> maps(const std::vector<int> & values) {
    std::vector<int> res;
    for (size_t i = 0; i < values.size(); ++i) {
        res.push_back(values.at(i) * 2);
    }
    return res;
}


int main() {
    for (auto i : maps({1,2,3})) {
        std::cout << i << '\n';
    }
    
    return 0;
}
