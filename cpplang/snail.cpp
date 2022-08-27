TODO: FINISH THIS TASK
#include <iostream>
#include <vector>


class Pos {
public:
    int x, y;
    Pos(): x(0), y(0) {};

    void move_down() {
        this -> x++;
    }

    void move_up() {
        this -> x--;
    }

    void move_right() {
        this -> y++;
    }

    void move_left() {
        this -> y--;
    }
};


std::vector<int> snail(const std::vector<std::vector<int>> &snail_map) {
    std::vector<int> res;
    int n = snail_map.capacity() - 1;
    Pos pos;


    while (n > 1) {
        
    res.push_back(snail_map.at(pos.x).at(pos.y));
    for (int i = 0; i < n; ++i) {
        pos.move_right();
        res.push_back(snail_map.at(pos.x).at(pos.y));
    }
    for (int i = 0; i < n; ++i) {
        pos.move_down();
        res.push_back(snail_map.at(pos.x).at(pos.y));
    }
    for (int i = 0; i < n; ++i) {
        pos.move_left();
        res.push_back(snail_map.at(pos.x).at(pos.y));
    }
    for (int i = 0; i < n-1; ++i) {
        pos.move_up();
        res.push_back(snail_map.at(pos.x).at(pos.y));
    }
    n--;
    }

    return res;
}


int main() {
    std::vector<std::vector<int>> array = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (auto i : snail(array)) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    std::vector<std::vector<int>> array1 = {
        {1, 2, 3, 1},
        {4, 5, 6, 4},
        {7, 8, 9, 7},
        {7, 8, 9, 7}
    };

    for (auto i : snail(array1)) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
