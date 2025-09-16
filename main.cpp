#include <iostream>

int main () {
    int n;
    std::cin >> n;
    int ans;
    while (n>0) {
        ans += n%10;
        n /= 10;
    }
    std::cout << ans;
}