#include <iostream>
#include <cinttypes>
#include <vector>
#include <bits/stdc++.h>


uint64_t descendingOrder(uint64_t a) {
    std::vector<int> b;

    for (int i = 0; i >= 0; --i) {
        b.push_back(a % 10);
        a /= 10;
    }

    //std::sort(b.begin(), b.end(), std::greater<int>());

    for (auto i : b) {
        std::cout << i << " ";
    }

    //int res = 0;
    //for (auto i : b) {
        //res = res * 10 + i;
    //}

    //return res;
    return 1;
}


int main() {
    std::cout << descendingOrder(42145) << std::endl;
    
    return 0;
}
