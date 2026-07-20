#include <iostream>
#include <vector>
using namespace std;
int main () {
    int n, i, j;
    while (cin >> n) {
        vector <int> chegada (n);
        vector <int> largada (n);
        for (i = 0; i < n; i++) cin >> largada[i];
        for (i = 0; i < n; i++) cin >> chegada[i];
        int ultrapassagens = 0;
        for (i = 0; i < n; i++) {
            int carro_atual = chegada[i];
            int pos = 0;
            while (largada[pos] != carro_atual) pos++;
            for (j = 0; j < pos; j++) {
                if (largada[j] != -1) ultrapassagens++;
            }
            largada[pos] = -1;
        }
        cout << ultrapassagens << endl;
    }
}