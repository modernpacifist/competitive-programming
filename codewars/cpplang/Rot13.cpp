TODO: FINISH THIS TASK
#include <string>
#include <iostream>
#include <array>


const std::array<char, 26> ENG = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 
    'P', 'Q', 'R', 'S',  'T', 'U', 'W', 'X', 'Y', 'Z'};


std::string rot13(std::string msg) {
    std::string res;

    for (int i : msg) {
        // if upper case
        if (97 <= i && i <= 122) {
            char hehe = i + 13;
            if (hehe > 122) {
                hehe %= 122;
            }
            std::cout << hehe << std::endl;
        }
    }

    return res;
}


int main() {
    //std::cout << rot13("z") << std::endl;

    std::cout << ENG.len << std::endl;

    return 0;
}
