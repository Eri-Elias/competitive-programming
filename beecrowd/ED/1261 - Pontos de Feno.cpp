/*
    Level: 2/10
    Source: https://judge.beecrowd.com/en/problems/view/1069
*/

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie();
    map <string, long int> dicionario;
    string cargo;
    long int salario, valor_total_a_receber;
    int N, M;
    cin >> N >> M;
    while (N--) {
        cin >> cargo >> salario;
        dicionario.insert({cargo, salario});
    }
    cin.ignore();
    while (M--) {
        string linha;
        valor_total_a_receber = 0;
        while (getline(cin, linha) && linha != ".") {
            stringstream iss (linha);
            string palavra;
            while (iss >> palavra) {
                if (dicionario.find(palavra) != dicionario.end()) valor_total_a_receber += dicionario[palavra];
            }
        }
        cout << valor_total_a_receber << endl;
    }
}