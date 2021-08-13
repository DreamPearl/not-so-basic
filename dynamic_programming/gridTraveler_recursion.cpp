/*
Say that you are a traveler on a 2D grid.
You begin in the top-left corner and your goal
is to travel to the bottom-right corner.
You may only move down or right.

In how many ways can you travel to the goal on a 
grid with dimensions m*n?

Let's see recursive solution(Brute Force).

Time complexity: O(2^(m+n))
Space complexity: O(m+n)
*/

#include <iostream>
using namespace std;

int gridTraveler(int m,int n){
    if(m==1 && n==1)
        return 1;
    if(m==0 || n==0)
        return 0;
    return gridTraveler(m-1,n) + gridTraveler(m,n-1);
}

int main(){
    int m,n;
    cin >> m >> n;
    int num_of_ways = gridTraveler(m,n);
    cout << num_of_ways << endl;
}