#include <iostream>
#include <string>


bool valid_braces(std::string braces) {
    if (braces.length() == 2) {
        return true;
    }
    return false;
}


int main() {
    const std::string test {"fda"};

    std::cout << valid_braces(test) << std::endl;

    return 0;
}
