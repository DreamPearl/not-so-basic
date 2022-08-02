#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> num = {7, 4, 9, 2, 5};
    std::cout << "The elements in the vector are: " << std::endl;
    for(int i=0;i<5;i++) {
        std::cout << num[i];
    }
    std::cout << std::endl;

    // Converting vector into a heap.
    std::make_heap(num.begin(),num.end());

    std::cout << "Displaying the heap elements: " << std::endl;
    for(int i=0;i<5;i++) {
        std::cout << num[i];
    }
    std::cout << std::endl;

    num.push_back(8);
    std::push_heap(num.begin(), num.end());

    std::cout << "The elements in the heap after push_back: " << std::endl;
    for(int i=0;i<num.size();i++) {
        std::cout << num[i];
    }
    std::cout << std::endl;

    std::pop_heap(num.begin(), num.end());
    num.pop_back();

    std::cout << "The elements in the heap after pop_back: " << std::endl;
    for(int i=0;i<num.size();i++) {
        std::cout << num[i];
    }
    std::cout << std::endl;
    
    return 0;
}
