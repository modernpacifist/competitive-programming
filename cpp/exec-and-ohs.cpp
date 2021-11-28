#include <cstdio>
#include <iostream>
#include <algorithm>


bool XO(const std::string& str) {
    int x_counter = 0, o_counter = 0;

    for (size_t i = 0; i < str.length(); ++i) {
        char c = ::tolower(str[i]);
        switch (c) {
            case 'x':
                ++x_counter;
                break;
            case 'o':
                ++o_counter;
                break;
            default:
                continue;
        }
    }

    return (x_counter == o_counter) ? true : false;
}


int main() {
    std::cout << XO("ooxx") << std::endl;
    std::cout << XO("xooxx") << std::endl;
    std::cout << XO("ooxXm") << std::endl;
    std::cout << XO("zpzpzpp") << std::endl;
    std::cout << XO("zzoo") << std::endl;

    return 0;
}
