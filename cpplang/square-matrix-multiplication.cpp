#include <iostream>
#include <vector>


std::vector<std::vector<int>> matrix_multiplication( std::vector<std::vector<int>> &a, std::vector<std::vector<int>> &b, size_t n) {
    std::vector<std::vector<int>> c;
    std::vector<int> inter;
    int intermediate = 0;

    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < n; ++j) {
            for (size_t k = 0; k < n; ++k) {
                intermediate += a.at(i).at(k) * b.at(k).at(j);
            }
            inter.push_back(intermediate);
            intermediate = 0;
        }
        c.push_back(inter);
        inter.clear();
    }

    return c;
}


int main() {
    return 0;
}
