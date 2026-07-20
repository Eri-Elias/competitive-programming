/*
    Level: 4/10
    Source: https://judge.beecrowd.com/en/problems/view/1063
*/

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main () {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    while (cin >> n && n) {
        vector <char> entrada (n);
        vector <char> saida (n);
        for (int i = 0; i < n; i++) cin >> entrada[i]; // entrada
        for (int i = 0; i < n; i++) cin >> saida[i]; // saida 
        stack <char> estacao; // intermed
        string move = "";
        int j = 0; //incrementar caso um vagão saia
        for (int i = 0; i < n; i++) {
            estacao.push(entrada[i]);
            move += 'I';
            while (!estacao.empty() && estacao.top() == saida[j]) {    
                estacao.pop();
                move += "R";
                j++;
            }
        }
        if (estacao.empty()) {
            cout << move << endl;
        }
        else {
            cout << move << " Impossible\n";
        }
    }
}