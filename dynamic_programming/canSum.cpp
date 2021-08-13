/*
Write a function canSum(targetSum,numbers) that 
takes in a targetSum and an array of numbers as 
arguments.

The function should return a boolean indicating whether
or not it is possible to generate that targetSum using numbers
from the array.

You may use an element of the array as many times as needed.

You may assume that all input numbers are nonnegative.

m = Target sum
n = Array length
Time Complexity: O(n*m)
Space Complexity: O(m)

*/

#include<iostream>
#include<map>
using namespace std;

int arr_len;
map<int,int> memory;

bool canSum(int targetSum,int numbers[])
{
    int remainder;
    if(memory.count(targetSum)!=0)
        return memory[targetSum];
    if(targetSum<0)
        return false;
    if(targetSum==0)
        return true;
    for(int i=0;i<arr_len;i++){
        remainder = targetSum - numbers[i];
        if(canSum(remainder,numbers) == true){
            memory[targetSum] = true;
            return true;
        }
    }
    memory[targetSum] = false;
    return false;
}

int main(){
    int targetSum;
    cin >> targetSum >> arr_len;
    int numbers[arr_len];
    for(int i=0;i<arr_len;i++){
        cin >> numbers[i];
    }
    bool result = canSum(targetSum,numbers);
    cout << result << endl;
}