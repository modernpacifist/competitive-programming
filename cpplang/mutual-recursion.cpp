#include <iostream>


int M(int);
int F(int);


int M(int n) {
    return (n == 0) ? 0 : n - F(M(n - 1));
}


int F(int n) {
    return (n == 0) ? 1 : n - M(F(n - 1));
}


int main() {
    std::cout << F(5) << std::endl;

    return 0;
}
