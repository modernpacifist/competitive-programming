#include <string>
#include <iostream>


bool solution(std::string const &str, std::string const &ending) {
    if (str.length() >= ending.length()) {
        return (0 == str.compare(str.length() - ending.length(), ending.length(), ending));
    } else {
        return false;
    }
}


int main() {
    std::cout << solution("hehe", "he") << std::endl;

    return 0;
}
