/*
    Level: 3/10
    Source: https://judge.beecrowd.com/en/problems/view/1318
*/

#include <iostream>
#include <vector>
using namespace std;
int main () {
    int i, n, resultado, m, t;
    while (cin >> n >> m && n && m) {
        vector <int> ingressos (m, 0);
        resultado = 0;
        for (i = 0; i < m; i++) {
            cin >> t; // ingresso da pessoa na festa
            if (ingressos[t-1] == 0) {
                ingressos[t-1] = 1;
            } else if (ingressos[t-1] == 1) {
                resultado++;
                ingressos[t-1] = 2;
            }
        }
        cout << resultado << endl;
    }
}