#include <iostream>
#include <vector>


int FindOutlier(std::vector<int> arr) {
    std::vector<int> even;
    std::vector<int> odd;
    for (auto i : arr) {
        if (i % 2 == 0) {
            even.push_back(i);
        } else {
            odd.push_back(i);
        }
    }
    return (even.size() == 1) ? even.at(0) : odd.at(0);
}


int main() {
    std::vector<int> arr {1,2,3};

    FindOutlier(arr);

    return 0;
}
