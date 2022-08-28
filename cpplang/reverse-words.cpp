#include <iostream>
#include <cstring>
#include <algorithm>


std::string reverse_words(std::string str) {
    std::string result_string;

    for (char i : str) {
        std::string buffer_string;
        if (!isspace(i)) {
            buffer_string += i;
        } else {
            std::reverse(buffer_string.begin(), buffer_string.end());
            std::cout << buffer_string << '\n';
            result_string += buffer_string;
            buffer_string.clear();
        }
    }

    return result_string;
}


int main() {
    std::cout << reverse_words("hehe sample") << '\n';
    
    return 0;
}
