/*
Write a function howSum(targetSum, numbers) that 
takes in a targetSum and an array of numbers as arguments.

The function should return an array containing any combination
of elements that add up to exactly the targetSum. If there is no 
combination that adds up to the targetSum, then return null.

If there are multiple combinations possible, you may return any single one.
*/

#include <iostream>
using namespace std;
int arr_len;
int num[];

int howSum(int targetSum, int numbers[]){
    int remainder;
    if(targetSum==0)
        return num[1] = {};
    if(targetSum<0)
        return NULL;
    for(int i=0;i<arr_len;i++){
        remainder = targetSum - numbers[i];   
        int result = howSum(remainder,numbers);
        if(result.empty()!=0){

        }
    }
    


}
int main(){
    int targetSum;
    cin >> targetSum >> arr_len;
    int numbers[arr_len];
    for(int i=0;i<arr_len;i++){
        cin >> numbers[i];
    }
    bool result = howSum(targetSum,numbers);
    cout << result << endl;
    return 0;
}