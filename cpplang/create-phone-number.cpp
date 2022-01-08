#include <iostream>
#include <string>


std::string createPhoneNumber(const int arr[10]) {
    char buff[15];
    std::sprintf(buff, "(%d%d%d) %d%d%d-%d%d%d%d%d", arr[0], arr[1], arr[2], arr[3], arr[4], 
            arr[5], arr[6], arr[7], arr[8], arr[9]);
    return buff;
}


int main() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    std::cout << createPhoneNumber(a) << std::endl;

    int b[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    std::cout << createPhoneNumber(b) << std::endl;

    return 0;
}
