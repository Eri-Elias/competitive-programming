#include <iostream>
#include <vector>
using namespace std;

int main() {
    long int pessoas, orcamento, num_hoteis, num_semanas;
    cin >> pessoas >> orcamento >> num_hoteis >> num_semanas;

    long int menor_preco = 1e9;
    bool achou = false;

    for (int i = 0; i < num_hoteis; i++) {
        long int preco;
        cin >> preco;
        long int custo_total = preco * pessoas;

        vector<long int> camas(num_semanas);
        for (int j = 0; j < num_semanas; j++) {
            cin >> camas[j];
        }

        if (custo_total <= orcamento) {
            for (int j = 0; j < num_semanas; j++) {
                if (camas[j] >= pessoas) {
                    achou = true;
                    if (custo_total < menor_preco) {
                        menor_preco = custo_total;
                    }
                    break; // já serve esse hotel
                }
            }
        }
    }

    if (achou) cout << menor_preco << endl;
    else cout << "stay home" << endl;

    return 0;
}
