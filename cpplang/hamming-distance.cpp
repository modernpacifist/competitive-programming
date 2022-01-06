#include <iostream>
#include <stddef.h>


size_t hamming_distance(const char *a, const char *b) {
    int res = 0;
    for (int i = 0; a[i] != '\0'; ++i) {
        if (a[i] != b[i]) {
            res++;
        }
    }
	return res;
}


int main() {
    std::cout << hamming_distance("I like turtles","I like turkeys") << std::endl;
    std::cout << hamming_distance("Hello World","Hello World") << std::endl;
    
    return 0;
}
