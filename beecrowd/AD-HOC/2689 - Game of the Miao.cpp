#include <iostream>
#include <vector>
#include <cmath>
#define tam 3
using namespace std;
int main () {
    int n, i, j;
    cin >> n;
    while (n--) {
        vector <vector <int>> miao (3, vector<int>(3, 0));
        for (i = 0; i < tam; i++) { // Matriz lida!
            for (j = 0; j < tam; j++) {
                cin >> miao[i][j]; 
            }
        }
        vector <int> mais_repetido (100, 0); // Aqui, eu quero criar um idx para cada posição e ver qual mais se repete!
        for (i = 0; i < tam; i++) {
            mais_repetido[abs(miao[i][0] - miao[i][1])]++;
            mais_repetido[abs(miao[i][1] - miao[i][0])]++;
            mais_repetido[abs(miao[i][1] - miao[i][2])]++;
        }
        int maior = mais_repetido[1]; // Aqui, vou procurar o valor mais repetido entre as diferenças.
        int idx = 1;
        for (i = 2; i < 100; i++) {
            if (mais_repetido[i] > maior) {
                maior = mais_repetido[i];
                idx = i;
            }    
        }
        
        vector <int> posicoes_possiveis; // Aqui, vou achar as posicoes possíveis.
        for (i = 0; i < tam; i++) {
            if (abs(miao[i][0] - miao[i][1]) != idx && abs(miao[i][0] - miao[i][2]) != idx) posicoes_possiveis.push_back(miao[i][0]);
            if (abs(miao[i][1] - miao[i][0]) != idx && abs(miao[i][1] - miao[i][2]) != idx) posicoes_possiveis.push_back(miao[i][1]);
            if (abs(miao[i][2] - miao[i][0]) != idx && abs(miao[i][2] - miao[i][1]) != idx) posicoes_possiveis.push_back(miao[i][2]);
        }

        cout << "Possiveis maletas: ";
        for (i = 0; i < posicoes_possiveis.size(); i++) {
            if (i == posicoes_possiveis.size() - 1) cout << posicoes_possiveis[i] << ";" << endl;
            else cout << posicoes_possiveis[i] << ", ";
        }
    }    
}