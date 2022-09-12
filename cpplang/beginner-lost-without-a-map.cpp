#include <iostream>
#include <vector>


std::vector<int> maps(const std::vector<int> & values) {
    for (size_t i = 0; i < values.size(); ++i) {
        values.at(i) = values.at(i) * 2;
        std::cout << values.at(i) << '\n';
    }
    return values;
}


int main() {
    for (auto i : maps({1,2,3})) {
        std::cout << i << '\n';
    }
    
    return 0;
}
