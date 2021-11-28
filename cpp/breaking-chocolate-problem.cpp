#include <iostream>


int break_chocolate(int n, int m){
    if (n == 0 || m == 0) {
        return 0;
    }

    return n * m - 1;
}


int main() {
    std::cout << break_chocolate(1,3) << std::endl;

    return 0;
}
