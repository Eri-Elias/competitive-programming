#include <bits/stdc++.h>
using namespace std;
int main () {
    int n, result = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int cont = 0;
        for (int j = 0; j < 3; j++) {
            int x;
            cin >> x;
            cont += x;
        }
        if (cont > 1) result++; 
    }
    cout << result << endl;
}