/*
    Level: 800
    Source: https://codeforces.com/problemset/problem/71/A
*/
#include <bits/stdc++.h>
using namespace std;
int main () {
    string word;
    int n, tamanho;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> word;
        if (word.length() > 10) {
            cout << word[0] << word.length() - 2 << word[word.length() - 1] << endl;
        }
        else {
            cout << word << endl;
        }
    }
}