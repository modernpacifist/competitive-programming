#include <iostream>
#include <vector>

using vc = std::vector<int>;


int get_section_id(int n, std::vector<int> a) {
    int res = 0;

    for (size_t i = 0; i < a.size(); ++i) {
        if (n > (a.at(i) - 1)) {
            ++res;
            n -= a.at(i);
        } else {
            break;
        }
    }

    if (res > a.size() - 1) {
        return -1;
    }

    return res;
}


int main() {
    std::cout << get_section_id(1, vc{300, 200, 400, 600, 100}) << '\n';
    std::cout << get_section_id(299, vc{300, 200, 400, 600, 100}) << '\n';
    std::cout << get_section_id(300, vc{300, 200, 400, 600, 100}) << '\n';
    std::cout << get_section_id(1599, vc{300, 200, 400, 600, 100}) << '\n';
    std::cout << get_section_id(1600, vc{300, 200, 400, 600, 100}) << '\n';
    
    return 0;
}
