#include <iostream>


//int digital_root(int n) {
    //int m = 0, s = 0;
    //while (n > 0) {
        //m = n % 10;
        //s += m;
        //n /= 10;
    //}
    //if (s > 10) {
        //return digital_root(s);
    //}
    //return s;
//}


int digital_root(int n) {
    return --n % 9 + 1;
}


int main() {
    std::cout << (digital_root(16) == 7) << std::endl;
    std::cout << (digital_root(195) == 6) << std::endl;
    std::cout << (digital_root(992) == 2) << std::endl;
    std::cout << (digital_root(0) == 0) << std::endl;

    return 0;
}
