#include <iostream>
#include <string>
#include <map>


bool find_opposite_bracket(std::string braces_string, char opposite_bracket) {
    if (braces_string.find(opposite_bracket) != std::string::npos) {
        return true;
    }
    return false;
}


bool valid_braces(std::string braces_string) {
    if (braces_string.length() % 2 == 1) {
        return false;
    }

    int res {0};
    for (auto i : braces_string) {
        switch (i) {
            case '(':
                res += find_opposite_bracket(braces_string, ')');
                break;
            case '[':
                res += find_opposite_bracket(braces_string, ']');
                break;
            case '{':
                res += find_opposite_bracket(braces_string, '}');
                break;
        }
    }

    return (braces_string.length() % res == 0);
}


int main() {
    std::cout << valid_braces("(){}[]") << std::endl;
    std::cout << valid_braces("([{}])") << std::endl;
    std::cout << valid_braces("(})") << std::endl;
    std::cout << valid_braces("[(])") << std::endl;
    std::cout << valid_braces("[({})](]") << std::endl;

    return 0;
}
