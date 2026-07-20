// Problem - Sum of Consecutivity odd Numbers I (with recursivity)
// Begginer level 2/10
// Source: https://judge.beecrowd.com/en/problems/view/1071
// Author: Herick Elias

#include <iostream>
using namespace std;

int sum_odd_numbers (int x, int y) {
    if (y >= x - 1) return 0;
    if (y % 2 != 0) {
        return y + sum_odd_numbers (x, y + 1);
    }
    return sum_odd_numbers (x, y + 1);
}

int main () {
    int x, y;
    cin >> x >> y;
    
    if (y > x) {
        int aux = x;
        x = y;
        y = aux;
    }

    cout << sum_odd_numbers (x, y + 1) << endl;
}