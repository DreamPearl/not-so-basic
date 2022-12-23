#include <bits/stdc++.h>

void insertionSort(std::vector<int>& v) {
    for(int i=1;i<v.size();i++) {
        int j = i-1;
        int toSortNum = v[i];
        while(j>=0 && v[j]>toSortNum) {
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = toSortNum;
    }
}

int main() {
    std::vector<int> v = {27, 6, 7, 10, 19, 22, 40, 25};
    insertionSort(v);
    std::cout<< "Sorted array using Insertion Sort: " << std::endl;
    for(int i=0;i<v.size();i++) {
        std::cout << v[i] << " " << std::endl;
    }
    return 0;
}
