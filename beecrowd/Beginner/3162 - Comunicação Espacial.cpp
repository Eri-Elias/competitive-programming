#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

struct nave {
    int x;
    int y;
    int z;
};

int main () {
    int n;
    cin >> n;
    vector <nave> naves (n);
    vector <double> resultado (n, 10000);
    double distancia;

    for (int i = 0; i < n; i++) {
        cin >> naves[i].x >> naves[i].y >> naves[i].z;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                distancia = sqrt ((naves[i].x - naves[j].x) * (naves[i].x - naves[j].x) + 
                (naves[i].y - naves[j].y) * (naves[i].y - naves[j].y) + (naves[i].z - naves[j].z) * (naves[i].z - naves[j].z));
                if (resultado[i] > distancia) resultado[i] = distancia;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (resultado[i] <= 20) cout << "A\n";
        else if (resultado[i] <= 50) cout << "M\n";
        else cout << "B\n";
    }
}