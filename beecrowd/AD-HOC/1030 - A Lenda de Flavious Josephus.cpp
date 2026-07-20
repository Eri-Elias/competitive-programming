#include <bits/stdc++.h>
using namespace std;

int josephius (int n, int m) {
    if (n == 1) return 0;
    else {
        return (josephius(n-1, m) + m) % n;
    }
}

int main () {
    int n, i, m, t, vivo;
    cin >> t;
    for (i = 0; i < t; i++) {
        cin >> n >> m;
        vivo = josephius(n, m) + 1;
        cout << "Case " << i + 1 << ": " << vivo << endl;
    }
}