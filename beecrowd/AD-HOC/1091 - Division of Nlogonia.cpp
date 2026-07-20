/*
    Level: 1/10
    Source: https://judge.beecrowd.com/en/problems/view/1091
*/

#include <iostream>
using namespace std;
int main () {
    int k, n, m, x, y, i;
    cin >> k;
    while (k) {
        cin >> n >> m;
        for (i = 0; i < k; i++) {
            cin >> x >> y;
            if (x == n or y == m) {
                cout << "divisa\n";
            }
            else {
                if (x < n and y > m) {
                    cout << "NO\n";
                }
                else {
                    if (x > n and y > m) {
                        cout << "NE\n";
                    }
                    else {
                        if (x > n and y < m) {
                            cout << "SE\n";
                        }
                        else {
                            cout << "SO\n";
                        }
                    }
                }
            }
        }
        cin >> k;
    }
}