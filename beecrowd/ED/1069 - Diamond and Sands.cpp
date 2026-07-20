/*
    Level: 3/10
    Source: https://judge.beecrowd.com/en/problems/view/1069
*/

#include <iostream>
#include <stack>
using namespace std;
int main () {
    int n;
    cin >> n;
    cin.ignore();
    while (n--) {
        string linha;
        cin >> linha;
        stack <char> diamantes;
        int cont = 0;
        for (char c : linha) {
            if (c == '<') {
                diamantes.push(c);
            }
            else if (!diamantes.empty() && c == '>') {
                diamantes.pop();
                cont++;
            }
        }
        cout << cont << endl;
    }
}