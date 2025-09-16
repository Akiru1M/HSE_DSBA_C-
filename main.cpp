#include <iostream>

int main () {
    int x1, y1;
    int x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;

    if (x2-x1 == y2-y1) {
        std::cout << "YES";
    } else if (y1 == y2) {
        std::cout << "YES";
    } else if (x1 == x2) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }

}