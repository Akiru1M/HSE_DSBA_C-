#include <iostream>



int main() {

    int a[5] = {1,2,3,4,5};
    int* start = a;
    int* end = start + 4;

    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        ++start;
        --end;
    }


    std::cout << a[4] << " " << a[0] << std::endl;


}


