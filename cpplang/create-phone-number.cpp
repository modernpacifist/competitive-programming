#include <iostream>
#include <string>
#include <array>


std::string createPhoneNumber(const int arr [10]) {
    std::string res = "(";
    int i = 0;
    for (i = 0; i < 3; ++i) {
        res.append(std::to_string(arr[i]));
    }
    res.append(")");
    res.append(" ");
    for (; i < 6; ++i) {
        res.append(std::to_string(arr[i]));
    }
    res.append("-");
    for (; i < 10; ++i) {
        res.append(std::to_string(arr[i]));
    }
    return res;
}


int main() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    std::cout << createPhoneNumber(a) << std::endl;

    int b[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    std::cout << createPhoneNumber(b) << std::endl;

    return 0;
}
