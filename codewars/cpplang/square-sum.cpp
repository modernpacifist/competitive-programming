#include <iostream>
#include <vector>


int square_sum(const std::vector<int> &numbers) {
    int res = 0;

    for (auto i : numbers) {
        res += i * i;
    }

    return res;
}


int main() {
    
    return 0;
}
