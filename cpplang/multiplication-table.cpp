#include <iostream>
#include <vector>


std::vector<std::vector<int>> multiplication_table(int n) {
    std::vector<std::vector<int>> res;
    std::vector<int> temp;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            temp.push_back(i * j);
        }
        res.push_back(temp);
        temp.clear();
    }

    return res;
}


int main() {

    for (auto i : multiplication_table(3)) {
        for (auto j : i) {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
    
    return 0;
}
