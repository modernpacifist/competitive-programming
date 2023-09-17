#include <iostream>
#include <cmath>


class Point {
public:
    int x;
    int y;

    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }
};


double distance_between_two_points(const Point& a, const Point& b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}


int main() {
    Point A = Point(3, 3);
    Point B = Point(3, 3);

    std::cout << distance_between_two_points(A, B) << std::endl;

    return 0;
}
