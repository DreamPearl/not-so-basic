#include <iostream>

int main() {
    int array[] = {1,2,3,4,5};

    int x = array[2];
    std::cout << x << std::endl;

    int y = *array;
    std::cout << y << std::endl;

    return 0;
}