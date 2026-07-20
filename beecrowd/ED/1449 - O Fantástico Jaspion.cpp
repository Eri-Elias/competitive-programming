#include <iostream>
#include <sstream>
#include <map>
using namespace std;
using ll = long long;
int main () {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int N, M, n;
    string EmJapones, traducao;
    cin >> n;
    while (n--) {
        cin >> N >> M;
        map <string, string> dicionario;
        for (int i = 0; i < N; ++i) {
            cin >> EmJapones;
            cin.ignore();
            getline (cin, traducao);
            dicionario[EmJapones] = traducao;
        }
        for (int i = 0; i < M; i++) {
            string linha;
            getline (cin, linha);
            stringstream ss (linha);
            string palavra;
            bool primeira_palavra = true;
            while (ss >> palavra) {
                if (!primeira_palavra) cout << ' ';
                primeira_palavra = false;
                if (dicionario.count(palavra)) {
                    cout << dicionario[palavra];
                }
                else {
                    cout << palavra;
                }
            }
            cout << endl;
        }
        cout << endl;
    }
}