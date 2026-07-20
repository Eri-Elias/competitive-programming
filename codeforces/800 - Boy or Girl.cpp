#include <bits/stdc++.h>
using namespace std;
int main () {
    string word;
    int cont;
    cin >> word;
    cont = 0;
    for (char n : word) {
        for (char m : word) {
            if (n != m) cont++;
        }
    }
    if (cont % 2 == 0) cout << "CHAT WITH HER!\n";
    else cout << "IGNORE HIM!\n";   
}