#include <string>
#include <vector>
#include <algorithm>
#include <iostream>


std::vector<std::string> solution(const std::string &s) {
    std::vector<std::string> res;
    std::string inter = ""; 

    for (size_t i = 0; i < s.length(); ++i) {
        inter += s[i];
        if (inter.length() == 2) {
            res.push_back(inter);
            inter = "";
        }
    }

    if (inter.length() == 1) {
        inter += "_";
        res.push_back(inter);
    }

    return res;
}


int main() {

    for (auto i : solution("heh")) {
        std::cout << i << std::endl;
    }

    return 0;
}
