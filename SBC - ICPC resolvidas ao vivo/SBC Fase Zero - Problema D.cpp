#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int N;
    while (cin >> N) {
        string S, T;
        cin >> S >> T;
        int totalSuper = 0, colapsados = 0;
        for (int i = 0; i < N; i++) {
            if (S[i] == '*') {
                totalSuper++;
                if (T[i] != '*') colapsados++;
            }
        }
        cout << fixed << setprecision (2) << (double)colapsados / totalSuper << endl;
    }
}