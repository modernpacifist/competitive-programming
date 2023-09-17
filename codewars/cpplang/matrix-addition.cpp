#include <iostream>
#include <vector>


std::vector<std::vector<int>> matrixAddition(std::vector<std::vector<int>> a, std::vector<std::vector<int>> b) {
    std::vector<std::vector<int>> res;
    std::vector<int> temp;

    for (size_t i = 0; i < a.size(); ++i) {
        for (size_t j = 0; j < b.size(); ++j) {
            temp.push_back(a.at(i).at(j) + b.at(i).at(j));
        }
        res.push_back(temp);
        temp.clear();
    }

    return res;
}


int main() {
    return 0;
}
