/*
    Level: 4/10
    Source: https://judge.beecrowd.com/en/problems/view/1911
*/

#include <iostream>
#include <string>
#include <map>
#include <cctype>
using namespace std;
int main () {
    int n;
    while (cin >> n && n) {
        map <string, string> nome_assinatura;
        int m, cont = 0, i;
        string nome, assinatura;
        for (i = 0; i < n; i++) { // Aqui, eu vou montar o map nome - assinatura pra verificar no proximo for.
            cin >> nome >> assinatura;
            nome_assinatura.insert ({nome, assinatura});
        }
        cin >> m;
        for (i = 0; i < m; i++) {
            int verificar = 0;
            cin >> nome >> assinatura;
            auto it = nome_assinatura[nome];
            for (int j = 0; j < assinatura.size(); j++) {
                if (tolower(it[j]) != tolower (assinatura[j])) verificar++;
            }
            if (verificar > 1) cont++;
        }
        cout << cont << endl;
        nome_assinatura.clear();
    }
}