#include <iostream>
#include <string>
#include <map>


bool valid_braces(std::string braces_string) {
    if (braces_string.length() % 2 == 1) {
        return false;
    }

    //std::map<char, int> braces_dict;

    //for (auto i : braces_string) {
        //if (braces_dict.count(i)) {
            //++braces_dict[i];
        //} else {
            //braces_dict.insert({i, 1});
        //}
    //}

    for (auto i : braces_string) {
        switch (i) {
            case '(':
                <code>
                break;
            default:
                <default_case>
        }
    }

    return true;
}


int main() {
    const std::string test {"(){}[]"};

    std::cout << valid_braces(test) << std::endl;

    return 0;
}
