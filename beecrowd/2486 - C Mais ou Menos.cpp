// Problem: 2486 - C mais ou menos?
// Source: https://judge.beecrowd.com/en/problems/view/2486
// Author: Herick Elias

#include <iostream>
#include <string.h>
#include <sstream>
using namespace std;

int calcular_mg (int x, string nome) {
    int valor;
    if (nome == "suco de laranja") valor = 120;
    else if (nome == "morango fresco" || nome == "mamao") valor = 85;
    else if (nome == "goiaba vermelha") valor = 70;
    else if (nome == "manga") valor = 56;
    else if (nome == "laranja") valor = 50;
    else valor = 34;

    return valor * x;
}

int main () {
    int n;
    while (cin >> n && n) {
        string linha;
        cin.ignore();
        int valor = 0, qtd;
        
        for (int i = 0; i < n; i++) {
            getline (cin, linha);
            stringstream ss (linha);
            string palavra, nome = "";

            while (ss >> palavra) {
                if (isdigit (palavra[0])) {
                    qtd = stoi (palavra);
                }
                else {
                    if (!nome.empty()) nome += ' ';
                    nome += palavra;
                }
            }
            valor += calcular_mg (qtd, nome);
        }
        if (valor > 130) cout << "Menos " << valor - 130 << " mg" << endl;
        else if (valor < 110) cout << "Mais " << 110 - valor << " mg" << endl;
        else cout << valor << " mg" << endl;
    }
}