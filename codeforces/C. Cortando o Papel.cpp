/*
    Source: https://codeforces.com/group/SFkT4V3SYb/contest/621673/problem/C
    Problem: Cortando o Papel
    Author: Herick Elias
*/

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector <long long int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    int ans = 1;
    for (int i = 0; i < N; i++) {
        long long int h = A[i];
        bool dentro = false;
        int blocos = 0;
        for (int j = 0; j < N; j++) {
            if (A[j] > h) {
                if (!dentro) {
                    dentro = true;
                    blocos++;
                }
            }
            else {
                dentro = false;
            }
        }
        ans = max (ans, 1 + blocos);
    }

    cout << ans << "\n";
}