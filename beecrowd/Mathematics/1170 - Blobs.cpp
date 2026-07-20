#include <iostream>
using namespace std;

int blobs (const float &n) {
    float cont = 0, divi;
    divi = n;
    while (divi > 1) {
        divi /= 2;
        cont ++;
    }
    return cont;
}

int main () {
    int n, i;
    cin >> n;
    for (i = 0; i < n; i++) {
        float alimento, dias;
        cin >> alimento;
        dias = blobs(alimento);
        cout << dias << " dias" << endl;
    }
}