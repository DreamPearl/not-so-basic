#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> num = {7, 4, 9, 2, 5};
    std::cout << "The elements in the vector are: " << std::endl;
    for(int i=0;i<5;i++) {
        std::cout << num[i];
        std::cout << "  ";
    }
    std::cout << std::endl;

    // Converting vector into a heap.
    std::make_heap(num.begin(),num.end());

    std::cout << "Displaying the heap elements: " << std::endl;
    for(int i=0;i<5;i++) {
        std::cout << num[i];
        std::cout << "  ";
    }
    std::cout << std::endl;

    num.push_back(10);
    std::push_heap(num.begin(), num.end());

    std::cout << "The elements in the vector after push_back/push_heap: " << std::endl;
    for(int i=0;i<num.size();i++) {
        std::cout << num[i];
        std::cout << "  ";
    }
    std::cout << std::endl;

    std::pop_heap(num.begin(), num.end());
    num.pop_back();

    std::cout << "The elements in the vecor after pop_heap/pop_back: " << std::endl;
    for(int i=0;i<num.size();i++) {
        std::cout << num[i];
        std::cout << "  ";
    }
    std::cout << std::endl;

    // Only doing pop_heap will make the largest, i.e front() element, element to go in the last of the vector.
    // While all other elements will continue to preserve the properties of the heap
    std::pop_heap(num.begin(), num.end());
    std::cout << "The elements in the vecor after pop_heap only: " << std::endl;
    for(int i=0;i<num.size();i++) {
        std::cout << num[i];
        std::cout << "  ";
    }
    std::cout << std::endl;

    return 0;
}
