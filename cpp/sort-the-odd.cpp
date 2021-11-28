#include <algorithm>
#include <iostream>


std::vector<int> sortArray(std::vector<int> a) {
    std::vector<int> odd_values;
    std::vector<int> odd_positions;

    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] % 2 != 0) {
            odd_values.push_back(a[i]);
            odd_positions.push_back(i);
        }
    }

    std::sort(odd_values.begin(), odd_values.end());

    for (size_t i = 0; i < odd_positions.size(); ++i) {
        a[odd_values[i]]
    }

    return a;
}


int main() {
    std::vector<int> expected = {1, 3, 2, 8, 5, 4};
    std::vector<int> a = {5, 3, 2, 8, 1, 4};

    sortArray(a);

    return 0;
}
