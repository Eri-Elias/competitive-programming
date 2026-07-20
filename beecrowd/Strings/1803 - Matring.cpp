/*
    Level: 1/10
    Source: https://judge.beecrowd.com/en/problems/view/1803
*/

#include <iostream>
#include <string>
using namespace std;

int main () {
    int n, i, t;
    string abc, alfabeto_completo = "";
    cin >> t >> abc;
    for (i = 0; i < t; i++) {
        cin >> n;
        alfabeto_completo.append(1, abc [n - 1]);  
    }

    cout << alfabeto_completo << endl;
}