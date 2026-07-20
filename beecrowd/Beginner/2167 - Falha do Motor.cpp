/**
 * Level: 1/10
 * Link: https://judge.beecrowd.com/en/problems/view/2167
*/

#include <iostream>
using namespace std;
int rpm (int N) {
    bool quebra = true;
    int contador = 1, valor_antigo = 0, novo_valor;
    for (int i = 0; i < N; i++) {
        cin >> novo_valor;
        if (valor_antigo > novo_valor) {
            quebra = false;
        }
        else {
            if (contador) {
                ++contador;
                valor_antigo = novo_valor;
            }
        }    
    }
    if (!quebra) return contador;
    else return 0;
}
int main () {
    int n, valor;
    cin >> n;
    valor = rpm (n);
    cout << valor << endl;
}