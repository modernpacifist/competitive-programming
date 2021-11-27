#include <string>
#include <iostream>


std::string balancedNum(unsigned long long int number) {
    std::string string_number = std::to_string(number);

    int string_length = string_number.length();

    if (string_length == 1) {
        return "Balanced";
    }

    if (string_length % 2 == 0) {
        int left_sum = 0, right_sum = 0;

        for (int i = 0; i < string_length / 2 - 1; ++i) {
            left_sum += string_number[i] - 48;
        }

        for (int i = string_length / 2 + 1; i < string_length; ++i) {
            right_sum += string_number[i] - 48;
        }

        if (left_sum == right_sum) {
            return "Balanced";
        }

        return "Not Balanced";

    } else {
        int left_sum = 0, right_sum = 0;

        for (int i = 0; i < string_length / 2; ++i) {
            left_sum += string_number[i] - 48;
        }

        for (int i = string_length / 2 + 1; i < string_length; ++i) {
            right_sum += string_number[i] - 48;
        }

        if (left_sum == right_sum) {
            return "Balanced";
        }

        return "Not Balanced";
    }
}


int main() {
    std::cout << balancedNum(1301) << std::endl;

    return 0;
}
