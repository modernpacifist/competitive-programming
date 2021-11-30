#include <iostream>
#include <vector>
#include <utility>
#include <cmath>


class Dioph {
    public:
        static std::vector<std::pair <long, long>> solEquaStr(long long n) {
            std::vector<std::pair <long, long>> res;
            std::pair<long, long> poly_pair;

            // x^2 - 4 * y^2 = n
            for (long long x = (n / 2) + 1; x > 0; x /= 2) {
                for (long long y = x / 2; y > 0; y--) {
                    if (pow(x, 2) - 4 * pow(y, 2) == n) {
                        poly_pair = std::make_pair(x, y);

                        res.push_back(poly_pair);
                    }
                }
            }

            return res;
        }
};


int main() {
    Dioph d;

    for (auto i : d.solEquaStr(90005)) {
        std::cout << i.first << " " << i.second << std::endl;
    }

    return 0;
}
