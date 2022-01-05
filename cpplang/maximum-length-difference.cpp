#include <iostream>
#include <vector>


class MaxDiffLength {
public:
    static int mxdiflg(std::vector<std::string> &a1, std::vector<std::string> &a2) {
        int max = 0;
        if (a1.empty() || a2.empty()) {
            return -1;
        }

        for (auto i : a1) {
            for (auto j : a2) {
                int diff = abs(i.length() - j.length());
                if (diff >= max) {
                    max = diff;
                }
            }
        }

        return max;
    };
};



int main() {
    std::vector<std::string> a1 = {"", "bbllkw", "oox", "ejjuyyy", "plmiis", "xxxzgpsssa", "xxwwkktt", "znnnnfqknaz", "qqquuhii", "dvvvwz"};
    std::vector<std::string> a2 = {"cccooommaaqqoxii", "gggqaffhhh", "tttoowwwmmww"};

    MaxDiffLength m;

    std::cout << m.mxdiflg(a1, a2) << std::endl;
    
    return 0;
}
