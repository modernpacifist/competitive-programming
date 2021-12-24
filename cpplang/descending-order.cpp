#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <cinttypes>


uint64_t descendingOrder(uint64_t a) {
    std::vector<uint64_t> b;

    while (a > 0) {
        b.push_back(a % 10);
        a /= 10;
    }

    std::sort(b.begin(), b.end(), std::greater<uint64_t>());

    uint64_t res = 0;
    for (auto d : b) {
        res = res * 10 + d;
    }

    return res;
}


int main() {
    std::cout << descendingOrder(42145) << std::endl;
    std::cout << descendingOrder(0) << std::endl;
    std::cout << descendingOrder(1) << std::endl;
    std::cout << descendingOrder(15) << std::endl;
    std::cout << descendingOrder(1021) << std::endl;
    std::cout << descendingOrder(123456789) << std::endl;
    std::cout << descendingOrder(1407719819) << std::endl;
    
    return 0;
}
