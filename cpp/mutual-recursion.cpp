#include <iostream>


int M(int n) {
    if (n == 0) {
        return 0;
    }
    return n - F(M(n - 1));
}


int F(int n) {
    if (n == 0) {
        return 1;
    }
    return n - M(F(n - 1));
}


int main() {
    std::cout << "hello world" << std::endl;

    return 0;
}
