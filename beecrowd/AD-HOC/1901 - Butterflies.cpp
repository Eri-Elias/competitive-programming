/*
    Level: 5/10
    Source: https://judge.beecrowd.com/en/problems/view/1901
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int m[n][n], v[n * 2];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> m[i][j];
        }
    }

    int a, b, k = 0, i, j, contador = 0;

    for (i = 0; i < n * 2; i ++) {
        cin >> a >> b;
        for (j = 0; j < k && v[j] != m[a - 1][b - 1]; j++);
        if (j >= k) {
            contador++;
            v[k] = m[a - 1][b - 1];
            k++;        
        }
    }

    cout << contador << "\n";
    return 0;
}