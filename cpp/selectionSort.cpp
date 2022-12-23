#include <bits/stdc++.h>

void selectionSort(int arr[], int size) {
    for(int i=0;i<size;i++) {
        int index = i;
        for(int j=i+1;j<size;j++) {
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
    int arr[] = {27, 6, 7, 10, 19, 22, 40, 25};  // This is a C array.
    // sizeof(arr) will give you the number of bytes in a C array.
    // So sizeof(arr) divided by sizeof(arr[0]) (or sizeof(int)) will give you the number of elements in the array.
    // We have to pass the size of the array to the selectionSort() as it's not possible to get the size of the array inside that function.
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, arr_size);
    std::cout<< "Sorted array using Selection sort: " << std::endl;
    for(int i=0;i<arr_size;i++) {
        std::cout << arr[i] << " " << std::endl;
    }
    return 0;
}
