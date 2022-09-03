#include <iostream>
#include <vector>

using vc = std::vector<int>;


int get_section_id(int n, std::vector<int> a) {
    int res = 0;

    for (int i : a) {
        if (n > i - 1) {
            n -= i;
            ++res;
        } 
    }

    //for (int i = 0; i < a.size(); ++i) {
        //n--;
    //}

    return res;
}


int main() {
    std::cout << get_section_id(1, vc{300, 200, 400, 600, 100}) << '\n';
    std::cout << get_section_id(299, vc{300, 200, 400, 600, 100}) << '\n';
    
    return 0;
}
