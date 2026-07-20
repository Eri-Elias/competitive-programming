#include <iostream>
using namespace std;
int main () {
    int i, f, r, valor;
    cin >> f >> r;
    int sementes[f], maior_qtd = 0;
    for (i = 0; i < r; i++) {
        cin >> sementes [i];
    }
    valor = sementes[0] - 1;
    if (valor > maior_qtd) {
        maior_qtd = valor;
    }
    for (i = 1; i < r; i++) {
        valor = (sementes[i] - sementes [i-1]) / 2;
        if (valor > maior_qtd) {
            maior_qtd = valor;
        }
    }
    valor = f - sementes[r-1];
    if (valor > maior_qtd) {
        maior_qtd = valor;
    }
    cout << maior_qtd << "\n";
}
