#include <iostream>


class Vector {
public:
    int x, y, z;

    Vector(int x, int y, int z) {
        this -> x = x;
        this -> y = y;
        this -> z = z;
    };
};


double dot_product(const Vector& a, const Vector& b){
    return a.x*b.x + a.y*b.y + a.z*b.z;
}


int main() {
    Vector a = Vector(2, 0, -1);
    Vector b = Vector(0, -2, 1);

    std::cout << dot_product(a, b) << std::endl;
    
    return 0;
}
