#include <cstdio>
#include <iostream>
#include <vector>


const char* specialNumber(int n) {
    bool flag = true;

    if (0 <= n && n <= 5) {
    } else {
        std::string string_number = std::to_string(n);

        for (size_t i = 0; i < string_number.length(); ++i) {
            if (!(0 <= (int)(string_number[i]) - 48 && (int)(string_number[i]) - 48 <= 5)) {
                flag = false;
            }
        }
    }

    return (flag) ? "Special!!" : "NOT!!";
}


int main() {
    std::cout << specialNumber(23) << std::endl;

    return 0;
}
