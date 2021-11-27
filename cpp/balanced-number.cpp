#include <string>
#include <iostream>


std::string balancedNum(unsigned long long int number) {

    std::string string_number = std::to_string(number);

    if (len(string_number) == 1) {
        return "Balanced";
    }


    return "Not Balanced";
}


int main() {
    std::cout << balancedNum(10) << std::endl;

    return 0;
}
