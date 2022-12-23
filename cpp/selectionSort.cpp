#include <bits/stdc++.h>
#include <iostream>

void selectionSort(int arr[]) {
    for(int i=0;i<8;i++) {
        int index = i;
        for(int j=i+1;j<8;j++) {
            if(arr[j]<arr[index]) {
                index = j;
            }
        }
        int smallerNum = arr[index];
        arr[index] = arr[i];
        arr[i] = smallerNum;
    }
}

int main() {
    int arr[] = {27, 6, 7, 10, 19, 22, 40, 25};
    selectionSort(arr);
    std::cout<< "Sorted array using Selection sort: " << std::endl;
    for(int i=0;i<8;i++) {
        std::cout << arr[i] << " " << std::endl;
    }
    return 0;
}