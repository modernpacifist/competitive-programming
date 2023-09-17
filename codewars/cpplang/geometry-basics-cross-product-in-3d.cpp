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


Vector cross_product(const Vector& a, const Vector& b){
    return Vector(a.y*b.z - a.z*b.y, a.z*b.x - a.x*b.z, a.x*b.y - a.y*b.x);
}  


int main() {
    Vector a = Vector(2, 0, -1);
    Vector b = Vector(0, -2, 1);

    auto c = cross_product(a, b);

    std::cout << c.x << " " << c.y << " "<< c.z << " " << std::endl;
    
    return 0;
}
