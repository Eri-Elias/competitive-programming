/*
    Level: 1/10
    Source: https://judge.beecrowd.com/pt/problems/view/2342
*/

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main () {
    int n;
    cin >> n;
    cin.ignore();
    
    string soma, linha;
    getline (cin, soma);
    
    stringstream ss (soma);
    pair <int, int> valores_da_soma;
    valores_da_soma.first = -1;

    bool soma_or_mult = 1;

    while (ss >> linha) {
        if (isdigit(linha[0])) {
            if (valores_da_soma.first == -1) valores_da_soma.first = stoi(linha);
            else valores_da_soma.second = stoi (linha);
        }
        if (linha == "+") soma_or_mult = 1;
        if (linha == "*") soma_or_mult = 0;
    }

    if (soma_or_mult) {
        if (valores_da_soma.first + valores_da_soma.second <= n) {
            cout << "OK\n";
        }
        else cout << "OVERFLOW\n";
    }
    else {
        if (valores_da_soma.first * valores_da_soma.second <= n) {
            cout << "OK\n";
        }
        else cout << "OVERFLOW\n";
    }
}