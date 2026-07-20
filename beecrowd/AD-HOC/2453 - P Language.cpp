/*
    Level: 4/10
    Source: https://judge.beecrowd.com/en/problems/view/2453
*/

#include <iostream>
#include <string>
using namespace std;
int main () {
    string palavra;
    getline (cin, palavra);
    int i = 0;
    string resultado;
    while (i < (int) palavra.size()){
        if (palavra[i] == ' ') {
            resultado += ' ';
            i++;
        }
        else {
            if (palavra[i] == 'p' || palavra[i] == 'P') {
                resultado += palavra[i+1];
                i += 2;
            }
        }
    }
    cout << resultado << endl;
}