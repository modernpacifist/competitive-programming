#include <iostream>
#include <string>
#include <vector>


std::vector<std::string> number(const std::vector<std::string> &lines) {
    std::vector<std::string> res;

    for (size_t i = 0; i < lines.size(); ++i) {
        //res.push_back(std::format("{}: {}", i+1, lines.at(i)));
        std::string temp = i+1 + ": " + lines.at(i);
        res.push_back(temp);
        //res.push_back(std::format("{}: {}", i+1, lines.at(i)));
    }

    return res;
}


int main() {
    std::vector<std::string> sample {"a", "b", "c"};

    //number(sample);

    for (auto i : number(sample)) {
        std::cout << i << '\n';
    }
    
    return 0;
}
