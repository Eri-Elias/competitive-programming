/*
    Level: 4/10
    Source: https://judge.beecrowd.com/en/problems/view/1944
*/

#include <bits/stdc++.h>
using namespace std;
int main () {
    int n, i, j;
    bool verificar;
    while (cin >> n && n) {
        int premio = 0;
        vector <char> painel, salva(4);
        char a, b, c, d;
        painel.push_back('F'); painel.push_back('A'); // Vou colocar as letras embaralhadas
        painel.push_back('C'); painel.push_back('E');

        for (i = 0; i < n; ++i) {
            cin >> a >> b >> c >> d;
            vector <char> entrada = {a, b, c, d};
            if (painel.size() >= 4) {
                for (j = 0; j < 4; j++) {
                    salva[4-j-1] = painel.back();
                    painel.pop_back();
                }
                verificar = true;
                for (j = 0; j < 4 && verificar; j++) {
                    if (entrada[4-1-j] != salva[j]) {
                        verificar = false;
                    } 
                }
                if (verificar) {
                    premio++;
                }
                else {
                    for (j = 0; j < 4; j++) painel.push_back(salva[j]);
                    for (j = 0; j < 4; j++) painel.push_back(entrada[j]);
                }
            }
            else {
                painel.push_back(a);
                painel.push_back(b);
                painel.push_back(c);
                painel.push_back(d);                
            }
            if (painel.empty()) {
                painel.push_back('F');
                painel.push_back('A');
                painel.push_back('C');
                painel.push_back('E');                
            }    
        }
        cout << premio << endl;
    }
}