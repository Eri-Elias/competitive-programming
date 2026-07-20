/*
    Level: 7/10
    Source: https://judge.beecrowd.com/en/problems/view/1559
*/

#include <bits/stdc++.h>
using namespace std;

bool esquerda (vector<vector<int>> mat) {
    bool verificar = false;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j + 1 < 4; j++) {
            if (mat[i][4-1-j] && mat[i][4-2-j] && mat[i][4-1-j] == mat[i][4-2-j]) return verificar = true;
            else if (!mat[i][4-2-j] && mat[i][4-1-j]) return verificar = true;
        }
    }
    return verificar;
}

bool direita (vector<vector<int>> mat) { // testar se vale mover pra direita;
    bool verificar = false;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j + 1 < 4; j++) { 
            if (mat[i][j] && mat[i][j + 1] && mat[i][j] == mat[i][j + 1]) return verificar = true;
            else if (mat[i][j] && !mat[i][j + 1]) return verificar = true;
        }
    }
    return verificar;
}

bool cima (vector<vector<int>> mat) {
    bool verificar = false;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j + 1 < 4; j++) {
            if (mat[4-1-j][i] && mat[4-2-j][i] && mat[4-1-j][i] == mat[4-2-j][i]) return verificar = true;
            else if (!mat[j][i] && mat[j+1][i]) return verificar = true;
        }
    } 
    return verificar;
}

bool baixo (vector<vector<int>> mat) {
    bool verificar = false;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j + 1 < 4; j++) {
            if (mat[j][i] && mat[j+1][i] && mat[j][i] == mat[j+1][i]) return verificar = true;
            else if (mat[j][i] && !mat[j+1][i]) return verificar = true;
        }
    }
    return verificar;
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    while (n--) {
        vector<vector<int>> mat (4, vector<int> (4));
        bool ja_venceu = false;
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                cin >> mat[i][j];
                if (mat[i][j] == 2048) ja_venceu = true;
            }
        } 
        vector <string> teste;
        
        if (ja_venceu) teste.push_back("NONE");
        else {
            if (baixo(mat)) teste.push_back("DOWN");
            if (cima(mat)) teste.push_back("UP");
            if (esquerda(mat)) teste.push_back("LEFT");
            if (direita(mat)) teste.push_back("RIGHT");
            if (teste.empty()) teste.push_back("NONE");
        }

        sort(teste.begin(), teste.end());

        for (int i = 0; i < (int)teste.size(); ++i) {
            if (i != 0) cout << " ";
            cout << teste[i];
        }
        cout << endl;
    }
}