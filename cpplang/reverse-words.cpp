#include <iostream>
#include <cstring>


std::string reverse_words(std::string str) {
    std::string result_string;

    for (auto i : str) {
        std::string buffer_string;
        if (isspace(i)) {
            std::cout << i << '\n';
        } else {
        }
    }

    return result_string;
}


int main() {
    std::cout << reverse_words("hehe sample") << '\n';
    
    return 0;
}
