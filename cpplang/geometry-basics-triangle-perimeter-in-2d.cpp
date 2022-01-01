#include <iostream>
#include <cmath>


class Point {
public:
    int x, y;

    Point(): x(0), y(0) {};

    Point(int x, int y) {
        this -> x = x;
        this -> y = y;
    };
};


class Triangle {
public:
    Point a, b, c;

    Triangle(Point a, Point b, Point c) {
        this -> a = a;
        this -> b = b;
        this -> c = c;
    };
};


double triangle_perimeter(const Triangle& t){
    return 
        sqrt( pow(t.a.x - t.b.x, 2) + pow(t.a.y - t.b.y, 2) ) + 
        sqrt( pow(t.b.x - t.c.x, 2) + pow(t.b.y - t.c.y, 2) ) + 
        sqrt( pow(t.c.x - t.a.x, 2) + pow(t.a.y - t.c.y, 2) );
}


int main() {
    Triangle t = Triangle(Point{10, 10}, Point{40, 10}, Point{10, 50});

    std::cout << triangle_perimeter(t) << std::endl;
    
    return 0;
}
