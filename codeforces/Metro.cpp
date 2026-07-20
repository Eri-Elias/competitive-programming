#include <iostream>
#include <vector>
#define pb push_back
using namespace std;
 
int main () {
    int N, s;
    cin >> N >> s;
    vector<vector<int>> track_1 (N); // ida
    vector<vector<int>> track_2 (N); // volta
    // preencher os tracks
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        track_1[i].pb(a);
    }
    for (int i = 0; i < N; i++) {
        int b;
        cin >> b;
        track_2[i].pb(b);
    }
    // condi 1: casa dele == 0 na ida
    if (track_1[0][0] == 0) {
        cout << "NO\n";
    }
    else if (s == 1) {
        cout << "YES\n";
    }
    else { // entrar aqui, garanto que a casa == 1 na ida
        int i;
        for (i = 0; i < N; i++) {
            if (track_1[i][0] && s-1 == i) {
                cout << "YES\n";
                return 0;
            }
        }
        if (track_1.back()[0]) { // entrando aqui, garanto que a última estação é == 1 para fazer a volta
            for (int j = 0; j < N; j++) {
                if (track_2[j][0] && j == s-1) {
                    cout << "YES\n";
                    return 0;
                }
            }
        }
        cout << "NO\n";
    }
}