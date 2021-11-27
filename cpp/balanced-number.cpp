#include <string>
#include <iostream>


std::string balancedNum(unsigned long long int number) {
    auto number_str = std::to_string(number);
    int balance = 0;

    for (size_t i = 0, j = number_str.size() + 1; j < number_str.size(); ++i, ++j) {
        balance += number_str[i];
        balance -= number_str[j];
    }

    return (balance == 0) ? "Balanced" : "Not Balanced";
}


int main() {
    std::cout << balancedNum(1301) << std::endl;
    std::cout << balancedNum(56239814) << std::endl;

    return 0;
}
