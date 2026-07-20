/*
    Author: Herick Elias
    Problem: Sudoku
    Level: 6/10
    Source: https://judge.beecrowd.com/en/problems/view/1383
*/


#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    for (int k = 0; k < n; k++) {
        set <int> verificar_linha, verificar_coluna, verificar_3x3;
        vector<vector<int>> sudoku (9, vector<int>(9));
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                cin >> sudoku[i][j];
            }
        }
        bool checar_sudoku = true;
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                verificar_coluna.insert(sudoku[j][i]);
                verificar_linha.insert(sudoku[i][j]);
            }
            if (verificar_coluna.size() != 9 || verificar_linha.size() != 9) checar_sudoku = false;
            verificar_coluna.clear();
            verificar_linha.clear();
        }
        for (int i = 0; i < 9; i += 3) {
            for (int j = 0; j < 9; j += 3) {
                for (int l = i; l < i + 3; l++) {
                    for (int m = j; m < j + 3; m++) {
                        verificar_3x3.insert(sudoku[l][m]);
                    }
                }
                if (verificar_3x3.size() != 9) checar_sudoku = false;
                verificar_3x3.clear();
            }
        }
        cout << "Instancia " << k + 1 << endl;
        if (checar_sudoku) cout << "SIM" << endl;
        else cout << "NAO" << endl;
        cout << endl;
    }
}