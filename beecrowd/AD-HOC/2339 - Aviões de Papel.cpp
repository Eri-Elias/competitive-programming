/*
    Author: Herick Elias
    Problem: 2339 - Aviões de Papel
    Level: 1/10
    Source: https://judge.beecrowd.com/pt/problems/view/2339
*/

#include <iostream>
using namespace std;
int main () {
    int c, p ,f;
    cin >> c >> p >> f;

    if (c <= p/f) cout << "S\n";
    else cout << "N\n";
}