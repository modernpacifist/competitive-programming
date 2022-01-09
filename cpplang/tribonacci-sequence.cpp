#include <iostream>
#include <vector>


std::vector<int> tribonacci(std::vector<int> signature, int n) {
    if (n == 0) {
        return {};
    }
    if (signature.size() > n) {
        for (size_t i = 0; i < signature.size() - n; ++i) {
            signature.pop_back();
        }
        return signature;
    }
    std::vector<int> result = signature;
    for (int i = 2; result.size() < n; ++i) {
        result.push_back(result.at(i - 2) + result.at(i - 1) + result.at(i));
    }
    return result;
}


int main() {
    std::vector<int> a {1, 1, 1};

    for (auto i : tribonacci(a, 10)) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
