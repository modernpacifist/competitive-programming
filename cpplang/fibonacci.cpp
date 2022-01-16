TODO: FINISH THIS TASK
#include <iostream>


long int fibonacci(int n) {
    if (n < 1) {
        return 1;
    }
    return n + fibonacci(n - 1);
}


int main() {
    for (size_t i = 0; i < 10; ++i) {
        std::cout << fibonacci(i) << " ";
    }
    std::cout << std::endl;

    return 0;
}
