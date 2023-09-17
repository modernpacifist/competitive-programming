#include <vector>
#include <iostream>


std::vector<int> countPositivesSumNegatives(std::vector<int> input) {
    std::vector<int> res;
    int counter = 0, nsum = 0;

    if (input.empty()) {
        return res;
    }

    for (auto i : input) {
        if (i > 0) {
            counter++;
        } else {
            nsum += i;
        }
    }

    res.push_back(counter);
    res.push_back(nsum);

    return res;
}


int main() {
    return 0;
}
