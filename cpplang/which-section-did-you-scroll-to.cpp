#include <iostream>
#include <vector>

using vc = std::vector<int>;


int get_section_id(int n, std::vector<int> a) {
    int res = 0;

    for (auto i : a) {
        if (n > i) {
            n -= ;

        }
    }

    return res;
}


int main() {
    std::cout << get_section_id(1, vc{300, 200, 400, 600, 100}) << '\n';
    
    return 0;
}
