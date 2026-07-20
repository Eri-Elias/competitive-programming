/*
    Problem: 1021 - Banknotes and Coins
    Level: 6/9
    Source: https://judge.beecrowd.com/en/problems/view/1021
*/

#include <iostream>
using namespace std;

void calcular_valor (double valor) {
    int a,b,c,d,n,e,f,g,h,i,j,k,l;

    n = (valor + 0.0001) * 100; // preço arredondado em centavos

    // NOTAS
    a = n / 10000; n %= 10000;
    b = n / 5000;  n %= 5000;
    c = n / 2000;  n %= 2000;
    d = n / 1000;  n %= 1000;
    e = n / 500;   n %= 500;
    f = n / 200;   n %= 200;

    // MOEDAS
    g = n / 100;   n %= 100;
    h = n / 50;    n %= 50;
    i = n / 25;    n %= 25;
    j = n / 10;    n %= 10;
    k = n / 5;     n %= 5;
    l = n / 1;     n %= 1;

    cout << "NOTAS:" << '\n';
    cout << a << " nota(s) de R$ 100.00" << '\n';
    cout << b << " nota(s) de R$ 50.00" << '\n';
    cout << c << " nota(s) de R$ 20.00" << '\n';
    cout << d << " nota(s) de R$ 10.00" << '\n';
    cout << e << " nota(s) de R$ 5.00" << '\n';
    cout << f << " nota(s) de R$ 2.00" << '\n';

    cout << "MOEDAS:" << '\n';
    cout << g << " moeda(s) de R$ 1.00" << '\n';
    cout << h << " moeda(s) de R$ 0.50" << '\n';
    cout << i << " moeda(s) de R$ 0.25" << '\n';
    cout << j << " moeda(s) de R$ 0.10" << '\n';
    cout << k << " moeda(s) de R$ 0.05" << '\n';
    cout << l << " moeda(s) de R$ 0.01" << '\n';
}

int main() {
    double valor;
    cin >> valor;
    calcular_valor (valor);
    return 0;
}