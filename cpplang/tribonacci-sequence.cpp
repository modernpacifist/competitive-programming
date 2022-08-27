#include <iostream>
#include <vector>


std::vector<int> tribonacci(std::vector<int> signature, int n) {
    if (n == 0) {
        return {};
    }
    if (n < 3) {
        signature.resize(n);
    }
    for (int i = 2; signature.size() < n; ++i) {
        signature.push_back(signature.at(i - 2) + signature.at(i - 1) + signature.at(i));
    }
    return signature;
}


int main() {
    std::vector<int> a {1, 1, 1};

    for (auto i : tribonacci(a, 10)) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
