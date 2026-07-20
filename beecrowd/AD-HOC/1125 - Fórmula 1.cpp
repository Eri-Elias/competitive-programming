#include <iostream>
using namespace std;
int main() {
    int G, P; 
    while (cin >> G >> P) {
        if (G == 0 && P == 0) break; 
        int resultado[100][100];
        for (int g = 0; g < G; g++) {
            for (int p = 0; p < P; p++) {
                cin >> resultado[g][p];
            }
        }
        int S;
        cin >> S;
        for (int s = 0; s < S; s++) {
            int K; 
            cin >> K;
            int sistema[101];
            for (int i = 1; i <= K; i++) {
                cin >> sistema[i];
            }
            int pontuacao[101] = {0};
            for (int g = 0; g < G; g++) {
                for (int p = 0; p < P; p++) {
                    int pos = resultado[g][p]; 
                    if (pos <= K) {
                        pontuacao[p + 1] += sistema[pos]; 
                    }
                }
            }
            int maxP = 0;
            for (int p = 1; p <= P; p++) {
                if (pontuacao[p] > maxP) maxP = pontuacao[p];
            }
            bool primeiro = true;
            for (int p = 1; p <= P; p++) {
                if (pontuacao[p] == maxP) {
                    if (!primeiro) cout << " ";
                    cout << p;
                    primeiro = false;
                }
            }
            cout << "\n";
        }
    }
}