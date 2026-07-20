#include <iostream>
using namespace std;
int main () {
    long int hi, hf, mi, mf;
    while (cin >> hi >> mi >> hf >> mf) {
        if (hi == 0 && mi == 0 && hf == 0 && mf == 0) break;

        long int tempo_inicial, tempo_final, tempo_total;

        tempo_inicial = (hi * 60) + mi;
        tempo_final = (hf * 60) + mf;

        if (tempo_inicial >= tempo_final) {
            tempo_total = (tempo_final - tempo_inicial) + 24 * 60;
        }
        else {
            tempo_total = tempo_final - tempo_inicial;
        }
        cout << tempo_total << endl;
    }
}