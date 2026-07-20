/*
    Level: 1/10
    Source: https://judge.beecrowd.com/en/problems/view/1789
*/

#include <bits/stdc++.h>
using namespace std;

int maior_veloc (int L) {
    int maior = 0;
    int velocidade;
    for (int i = 0; i < L; i++) {
        cin >> velocidade;
        if (maior < velocidade) maior = velocidade;
    }
    if (maior < 10) return 1;
    else if (maior < 20) return 2;
    else return 3;
}

int main () {
    int L, maior_nivel;
    while (cin >> L) {
        maior_nivel = maior_veloc(L);
        cout << maior_nivel << endl;
    }
}