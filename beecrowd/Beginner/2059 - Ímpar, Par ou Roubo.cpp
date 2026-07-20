#include <bits/stdc++.h>
using namespace std;

bool ipr (int p, int j1, int j2, int r, int a) { // se true, o jogador 1 ganha
    if (r && a) return false;
    else if (r && !a || !r && a) return true; // ganha roubando ou sendo acusado falsamente
    else if ((j1 + j2) % 2 == 0 && p || (j1 + j2) % 2 != 0 && !p) return true; //impar ou par honesto
    else return false;
}

int main () {
    int p, j1, j2, r, a;
    bool vencedor;
    cin >> p >> j1 >> j2 >> r >> a;
    vencedor = ipr (p, j1, j2, r, a);
    if (vencedor) cout << "Jogador 1 ganha!\n";
    else cout << "Jogador 2 ganha!\n";
}