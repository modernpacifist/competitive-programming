#include <iostream>
#include <string>
#include <vector>


std::vector<std::string> number(const std::vector<std::string> &lines) {
    std::vector<std::string> res;
    for (auto i : lines) {
        std::cout << i << '\n';
        //res.push_back(i);
    }
    return res;
}


int main() {
    std::vector<std::string> sample {"a", "b", "c"};

    for (auto i : sample) {
        std::cout << std::format("{} hehe", i) << '\n';
    }

    //number(sample);
    
    return 0;
}
