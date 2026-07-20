/*
    Level: 5/10
    Source: https://judge.beecrowd.com/en/problems/view/1633
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main () {
    int n;
    while (cin >> n) {
        vector <pair<ll, ll>> p (n); // chegada - duração
        for (int i = 0; i < n; ++i) {
            cin >> p[i].first >> p[i].second;
        }
        sort (p.begin(), p.end());
        priority_queue<pair<ll,ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq; // duração - chegada | PQ Heap
        ll tempo = 0, espera = 0, i = 0;
        while (i < n || !pq.empty()) {
            while (i < n && p[i].first <= tempo) {
                pq.push({p[i].second, p[i].first});
                i++;
            }
            if (pq.empty()) {
                tempo = p[i].first;
                continue;
            }
            auto [a, b] = pq.top();
            pq.pop();
            espera += tempo - b;
            tempo += a;
        }
        cout << espera << endl;
    }
}