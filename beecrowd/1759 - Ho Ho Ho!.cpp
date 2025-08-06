// Problem: 1759 - Ho Ho Ho!
// Source: https://judge.beecrowd.com/en/problems/view/1759
// Author: Herick Elias

#include <iostream>

using namespace std;

int i;
void Ho (int a) {
    for (i = 0; i < a; i++) {
        if (i == a - 1) {
            cout << "Ho!\n";
        }
        else {
            cout << "Ho ";
        }
    }
}

int main () {
    int n;
    cin >> n;
    Ho (n);
}