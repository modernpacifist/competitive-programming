#include <iostream>


std::string boolean_to_string(bool b) {
    return b ? "true" : "false";
}


int main() {
    std::cout << boolean_to_string(true) << "\n";
    std::cout << boolean_to_string(false) << "\n";

    return 0;
}