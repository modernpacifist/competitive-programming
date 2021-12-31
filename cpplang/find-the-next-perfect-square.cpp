#include <iostream>
#include <cmath>


long int findNextSquare(long int sq) {
    if (sq >= 0) {
        long int sr = sqrt(sq);
        if (sr * sr != sq) {
            return -1;
        }
    }
    long int inter = sqrt(sq);
    return pow(inter+1, 2);
}


int main() {
    std::cout << findNextSquare(114) << std::endl;
    
    return 0;
}
