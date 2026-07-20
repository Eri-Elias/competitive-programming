// ED

#include <iostream>
#include <algorithm>
#include <set>
#include <sstream>
using namespace std;

int main () {
    int n, i;
    cin >> n;
    cin.ignore();
    for (i = 0; i < n; i++) {
        set <string> lista_compras;
        string palavra, linha;
        getline (cin, linha);
        stringstream ss (linha);
        while (ss >> palavra) {
            lista_compras.insert(palavra);
        }
        bool primeiro = true;
        for (auto it = lista_compras.begin(); it != lista_compras.end(); ++it) {
            if (!primeiro) cout << " ";
            cout << *it;
            primeiro = false;
        }
        cout << endl;
    }
}