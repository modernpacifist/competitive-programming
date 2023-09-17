#include <iostream>
#include <vector>


bool isValidWalk(std::vector<char> walk) {
    int x = 0, y = 0;
    for (auto i : walk) {
        switch (i) {
            case 'n':
                y++;
                break;
            case 's':
                y--;
                break;
            case 'w':
                x--;
                break;
            case 'e':
                x++;
                break;
        }
    }
    return (walk.size() == 10 && x == 0 && y == 0) ? true : false;
}


int main() {
    std::vector<char> a {'n'};

    isValidWalk(a);
    
    return 0;
}
