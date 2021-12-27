#include <iostream>


int sumTriangularNumbers(int n) {
    int s = 0, m = 1, c = 2;

    for (int i = 0; i < n; ++i) {
        s += m;
        m += c;
        c++;
    }

    return s;
}


int main() {

    std::cout << sumTriangularNumbers(4) << std::endl;

    return 0;
}
