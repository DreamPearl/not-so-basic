#include <iostream>

int main() {
    int n, i;
    std::cout << "Enter n and i. Where n is an integer whose ith bit you want to check." << std::endl; 
    std::cin >> n >> i;

    if(n & (1<<i)) {
        std::cout << "The " << i << "th bit of " << n << " is true." << std::endl; 
    }
    else {
        std::cout << "The " << i << "th bit of " << n << " is false." << std::endl; 
    }

    n = n ^ (1<<i);
    std::cout << "The number after toggling the ith bit: " << n << std::endl;

    return 0;
}
