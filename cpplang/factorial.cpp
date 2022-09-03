#include <iostream>


long long factorial(int n) {
    if (n == 0) {
        return 1;
    } else if (n < 0) {
        return 0;
    }
    return n * factorial(n - 1);
}


int main() {
    std::cout << factorial(19) << '\n';
    
    return 0;
}
