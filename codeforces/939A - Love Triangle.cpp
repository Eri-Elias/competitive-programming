/*
    Level: 800
    Source: https://codeforces.com/problemset/problem/939/A
*/

#include <iostream>
#include <vector>
#define pb push_back
using namespace std;

int main () {
    int N, f;
    cin >> N;
    vector<vector<int>> love_triangle(N);
    for (int i = 0; i < N; i++) {
        cin >> f;
        love_triangle[i].pb(f-1);
    }
    for (int i = 0; i < N; i++) {
        int aviao_B = love_triangle[i][0];
        int aviao_C = love_triangle[aviao_B][0];
        if (i == love_triangle[aviao_C][0]) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}   