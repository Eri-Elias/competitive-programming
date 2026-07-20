/**
 * Level: 3/10
 * Link: https://judge.beecrowd.com/en/problems/view/2663
*/

#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main () {
    int n, k, i;
    cin >> n >> k;
    vector <int> participantes (n);
    for (i = 0; i < n; i++) {
        cin >> participantes[i];
    }
    sort (participantes.rbegin(), participantes.rend());
    int contador = 0, classificados = 0;
    for (i = 0; i < n && contador < k; i++) {
        if (participantes[i] == participantes[i + 1] && contador == k - 1) {
            classificados++;
        }
        else {
            contador++;
            classificados++;
        }
    }
    cout << classificados << endl;
}