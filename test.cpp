#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <deque>
#include <vector>
int main() {
    std::cout << "\u001b[32;1m";
    int n = 10;
    int m;
    std::vector<std::deque<int>> vec;
    for (int i = 0; i < 20; i++) {
        vec.push_back(std::deque<int>(n));
        vec[i].push_back(rand() % 10);


    }

    while (true) {
        std::cout << "\u001b[32;1m";
        for (int i = 0; i < 20; i++) {
            vec[i].pop_front();
            vec[i].push_back(rand() % 10);
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                std::cout << vec[i][j] << " ";
            }
            std::cout << std::endl;
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(80));
        std:: cout << "\033c";
    }
}