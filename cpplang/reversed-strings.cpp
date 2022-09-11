#include <iostream>
#include <string>


std::string reverseString(std::string str) {
    std::string res;

    for (int i = str.size() - 1; i > -1; --i) {
        //std::cout << i << '\n';
        res += str[i];
    }

    return res;
}


int main() {
    std::cout << reverseString("sample") << '\n';
    
    return 0;
}
