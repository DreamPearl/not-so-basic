#include <bits/stdc++.h>

void bubbleSort(std::vector<int>& v) {
    for(int i=0;i<v.size();i++){
        for(int j=1;j<(v.size())-i;j++){
            if(v[j-1]>v[j]) {
                int temp = v[j-1];
                v[j-1] = v[j];
                v[j] = temp;
            }
        }
    }
}

int main() {
    std::vector<int> v = {27, 6, 7, 10, 19, 22, 40, 25};
    bubbleSort(v);
    std::cout<< "Sorted array using Bubble Sort: " << std::endl;
    for(int i=0;i<v.size();i++) {
        std::cout << v[i] << " " << std::endl;
    }
    return 0;
}
