#include <iostream>
#include <map>
#include <string>


std::map<char, unsigned> count(const std::string& string) {
    std::map<char, unsigned> res;
    for (auto i : string) {
        std::cout << res.insert(i) << " ";
    }
    std::cout << std::endl;

    return res;
}


int main() {
    // for (auto i : count("sample")) {
    //     std::cout << i << '\n';
    // }
    count("sample");

    return 0;
}