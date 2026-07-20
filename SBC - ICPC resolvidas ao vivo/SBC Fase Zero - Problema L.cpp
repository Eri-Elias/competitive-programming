/*
    Author: Herick Elias
    Source: file:///C:/Users/ELISANIA%20S.DA%20SILVIA/Downloads/L.pdf
    Problema L: Linha de Produção de qPhones
*/

#include <iostream>
using namespace std;
int main () {
    long long int M, qbit;
    int contador = 0;
    
    cin >> M;
    
    qbit = M * 8000000;
    
    while (qbit >= 1) {
        contador ++;
        qbit /= 2;
    }
    cout << contador << endl;
}