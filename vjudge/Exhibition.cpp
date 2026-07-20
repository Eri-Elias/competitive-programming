#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main () {
    int K, i, j, x;
    cin >> K;
    x = K;
    while (K--) {
        int N;
        vector<int> frequencia_selos (10005, -1);
        int qtd_total_selos = 0;
        cin >> N;
        for (i = 0; i < N; i++) {
            int M;
            cin >> M;
            for (j = 0; j < M; j++) {
                int A;
                cin >> A;
                if (frequencia_selos.at(A) == -1 || frequencia_selos.at(A) == i) {
                    frequencia_selos.at(A) = i; // selo novo marcado
                }
                else if (frequencia_selos.at(A) != -1) {
                    frequencia_selos.at(A) = -2; // selo repetido
                }
            }
        }

        // contagem 
        vector<int> selos_unicos_usuarios (N, 0);
        for (i = 0; i < 10005; i++) {
            if (frequencia_selos.at(i) >= 0) {
                selos_unicos_usuarios.at(frequencia_selos.at(i))++;
                qtd_total_selos++;
            }
        }

        // printar
        double valor_porcentagem;
        cout << "Case " << x - K << ": ";
        for (i = 0; i < N - 1; i++) {
            valor_porcentagem = (double)selos_unicos_usuarios.at(i) / qtd_total_selos * 100;
            cout << fixed << setprecision(6) << valor_porcentagem << "% ";
        }
        valor_porcentagem = (double)selos_unicos_usuarios.back() / qtd_total_selos * 100;
        cout << fixed << setprecision(6) << valor_porcentagem << "%" << '\n';        
    }
}