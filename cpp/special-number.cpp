#include <cstdio>
#include <iostream>
#include <vector>


//std::vector<int> int_to_arr(int n) {
    //std::vector<int> arr = {0};
    //std::string num_string;
    //while (n > 0) {
    //}
    //return {0};
//}


const char* specialNumber(int n) {
    bool flag = true;

    if (0 <= n && n <= 5) {
    } else {
        std::cout << "HHEE" << std::endl;
        std::string string_number = std::to_string(n);

        for (size_t i = 0; i < string_number.length(); ++i) {
            if (!(0 <= (int)(string_number[i]) && (int)(string_number[i]) <= 5)) {
                flag = false;
                break;
            }
        }
    }

    return (flag) ? "Special!!" : "NOT!!";
}


int main() {
    //std::cout << specialNumber(5) << std::endl;
    //std::cout << specialNumber(6) << std::endl;
    std::cout << specialNumber(23) << std::endl;
    return 0;
}
