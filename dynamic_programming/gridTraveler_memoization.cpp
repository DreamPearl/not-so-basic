/*
Say that you are a traveler on a 2D grid.
You begin in the top-left corner and your goal
is to travel to the bottom-right corner.
You may only move down or right.

In how many ways can you travel to the goal on a 
grid with dimensions m*n?

Let's see memoization solution.

Time complexity: O(m*n)
Space complexity: O(m+n)
*/

#include <iostream>
#include <map>
using namespace std;

map<pair<int,int>,long> memory;
long gridTraveler(int m,int n){
    pair<int,int> key = make_pair(m,n);
    if(memory.count(key)!=0)
    return memory[key];
    if(m==1 && n==1)
    return 1;
    if(m==0 || n==0)
    return 0;
    memory[key] = gridTraveler(m-1,n) + gridTraveler(m,n-1);
    return memory[key];
}

int main(){
    int m,n;
    cin >> m >> n;
    long num_of_ways = gridTraveler(m,n);
    cout << num_of_ways << endl;
    return 0;
}