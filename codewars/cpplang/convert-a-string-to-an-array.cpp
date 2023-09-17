#include <iostream>
#include <vector>
#include <string>


std::vector<std::string> string_to_array(const std::string& s) {
    std::vector<std::string> result_vector;
    std::string buffer_string;

    for (char i : s) {
        if (!isspace(i)) {
            buffer_string += i;
        } else {
            result_vector.push_back(buffer_string);
            buffer_string.clear();
        }
    }
    result_vector.push_back(buffer_string);

    return result_vector;
}


int main() {
    std::string s = "hello world";

    std::vector<std::string> a = string_to_array(s);

    for (auto i : a) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}