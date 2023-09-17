#include <iostream>
#include <cstring>
#include <algorithm>


std::string reverse_words(std::string str) {
    std::string result_string;
    std::string temp;
    for (int i = 0; i < (int)str.size(); ++i) {
        if (!isspace(str[i])) {
            temp += str.at(i);
        } else {
            std::reverse(temp.begin(), temp.end());
            std::cout << temp << std::endl;
            result_string += temp;
            result_string += " ";
            temp.clear();
        }
    }

    std::reverse(temp.begin(), temp.end());
    result_string += temp;

    return result_string;
}


int main() {
    std::cout << reverse_words("hehe sample") << '\n';
    
    return 0;
}
