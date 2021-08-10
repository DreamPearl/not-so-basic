/*
Fibonacci(Memoization):

Time comlexity: O(n)
Space complexity: O(n)
*/

#include <iostream>
#include <map>
using namespace std;

map<int,long> memory;
long fib(int n){
    if(memory.count(n)!=0)
        return memory[n];
    if(n==0)
        return 0;
    if(n<=2)
        return 1;
    else{
        memory[n] = fib(n-1)+fib(n-2);
        return memory[n];
    }
}

int main(){
    int n;
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}