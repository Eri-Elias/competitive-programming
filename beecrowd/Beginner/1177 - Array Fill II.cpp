// Problem - Array Fill II (with recursivity)
// Source: https://judge.beecrowd.com/en/problems/view/1177
// Author: Herick Elias

#include <iostream>
using namespace std;

int contador = 0;
int i = 0;

int array_fill (int n) {
    if (contador > 999) return 0;
    else {
        cout << "N[" << contador <<"] = " << i % n << endl;
        contador++;
        i++;
        if (i == n) i = 0;
        array_fill (n);
    }    
}

int main () {
    int x;
    cin >> x;
    array_fill (x);
}