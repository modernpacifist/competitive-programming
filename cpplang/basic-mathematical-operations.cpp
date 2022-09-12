#include <iostream>


int basicOp(char op, int val1, int val2) {
    switch (op) {
        case '+':
            return val1 + val2;
            break;
        case '-':
            return val1 - val2;
            break;
        case '*':
            return val1 * val2;
            break;
        case '/':
            return val1 / val2;
            break;
    }
    return 1;
}


int main() {
    std::cout << basicOp('+', 4, 7) << '\n';

    return 0;
}
