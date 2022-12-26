#include <bits/stdc++.h>

int Power(int x, int y) {
    if(y == 1) return x;
    return x*Power(x,y-1);
}

int main() {
    int x = 3, y = 5;
    int power = Power(x, y);
    std::cout << power << std::endl;
    return 0;
}

// x^y = x^(y-1) * x;

// if y == 1 then x^y = x;  (This will be our base condition)
// otherwise x^y =  x^(y-1) * x;