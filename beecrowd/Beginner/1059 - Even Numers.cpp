// Problem: Even Numbers (with recursivity) 
// Source: https://judge.beecrowd.com/en/problems/view/1059
// Author: Herick Elias

#include <iostream>
using namespace std;

void even_number (int n) {
    if (n > 100) return;
    else {
        cout << n << endl;
        return even_number(n + 2);
    }
}

int main () {
    even_number (2);
}