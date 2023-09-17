#include <stdio.h>


int Ackermann(int m, int n) {
    if (m < 0 || n < 0) {
        return -1;
    }

    if (m == 0) {
        return n + 1;
    }

    if (m > 0 && n == 0) {
        return Ackermann(m - 1, 1);
    }

    if (m > 0 && n > 0) {
        return Ackermann(m - 1, Ackermann(m, n - 1));
    }

    return 0;
}


int main() {
    int ackermann_res = Ackermann(1,3);

    printf("%d\n", ackermann_res);

    return 0;
}
