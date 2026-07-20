/*
    Level: 5/10
    Source: https://judge.beecrowd.com/en/problems/view/1861
*/

#include <iostream>
#include <map>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    set <string> pessoas_mortas;
    map <string, int> assassinos;
    string nome_do_assassino, pessoa_que_morreu;

    while (cin >> nome_do_assassino >> pessoa_que_morreu) { // Aqui, eu vou ler a contagem de assassinos e pessoas mortas
        assassinos.insert({nome_do_assassino, 1});
        pessoas_mortas.insert(pessoa_que_morreu);
    }

    cout << "HALL OF MURDERES:\n";
    for (auto it = assassinos.begin(); it != assassinos.end(); ++it) {
        if (pessoas_mortas.find(it->first) == pessoas_mortas.end()) {
            cout << it->first << " " << it -> second << endl;
        }
    }
}