#include <iostream>
#include <vector>
#include <unordered_set>
#include <string>
using namespace std;

int main () {
    int T;
    cin >> T;
    int x = T;
    while (T--) {
        // Ler todas as palavras.
        int N, M;
        cin >> M >> N;
        
        // limpar o buffer
        string z;
        getline(cin, z);
        
        vector<string> language_1 (M);
        vector<string> language_2 (N);
        for (int j = 0; j < M; j++) {
            getline(cin, language_1.at(j));
        }
        for (int j = 0; j < N; j++) {
            string word;
            getline (cin, language_2.at(j));
        }
        
        // Colocar todas as strings no set.
        unordered_set <string> all_words;
        for (string c : language_1) {
            for (string x : language_2) {
                all_words.insert(c + x);
            }
        }

        // Mostrar na tela.
        cout << "Case " << x - T << ": " << all_words.size() << endl;
    }
}