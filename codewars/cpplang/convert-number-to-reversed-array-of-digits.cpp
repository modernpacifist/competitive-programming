#include <iostream>
#include <vector>


std::vector<int> digitize(unsigned long n) {        
    std::vector<int> res;
    int m = 10;

    while (n) {
        //std::cout << n % m << std::endl;
        m *= 10;
        res.push_back(n % m);
    }

    return res;
}


int main() {

    for (auto i : digitize(35231)) {
        std::cout << i << std::endl;
    }
    
    return 0;
}
