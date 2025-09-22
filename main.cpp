#include <iostream>
#include <chrono>
#include <thread>
#include <string>
int main() {


    int count = 0;

    std::string words[3] {"I Love DSBA.", "I Love HSE.", "I Love Seminars on C++"};

    while (true) {
        for (std::string word : words) {
            count=0;
            for (char i: word) {
                std::cout << "\u001b[31m" << i;
                count++;
                std::this_thread::sleep_for(std::chrono::milliseconds(200));
                }
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
            for (int i = 0; i < count; i++) {
                std::cout << '\b' << ' ' << '\b';
                std::this_thread::sleep_for(std::chrono::milliseconds(100));
            }
        }
    }
}