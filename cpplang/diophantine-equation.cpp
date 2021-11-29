#include <iostream>
#include <vector>
#include <utility>
#include <cmath>


class Dioph {
    public:
        static std::vector<std::pair <long, long>> solEquaStr(long long n) {
            std::vector<std::pair <long, long>> res;
            std::pair<long, long> poly_pair;
            long long x = n, y;

            // x^2 - 4 * y^2 = n
            while (x >= 0 || y >= 0) {
                y = x;
                
                if (pow(x, 2) - 4 * pow(y, 2) == n) {
                    poly_pair = std::make_pair(x, y);

                    res.push_back(poly_pair);
                }

                x--;
            }

            return res;
        }
};


int main() {
    //Dioph d;

    //for (auto i : d.solEquaStr(90005)) {
        //std::cout << i.first << std::endl;
        //std::cout << i.second << std::endl;
    //}

    std::pair<long, long> a = {1, 2};

    std::cout << a.first << " " << a.second << std::endl;

    return 0;
}
