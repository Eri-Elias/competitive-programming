// Problem: Simple Factorial (with recursivity)
// Level: 2/10
// Source: https://judge.beecrowd.com/en/problems/view/1153

#include <iostream>
using namespace std;

int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * fatorial (n - 1);   
    }    
}

int main() {
    int n;
    cin >> n;
    cout << fatorial (n) << endl;
}