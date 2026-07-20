/*
    Level: 3/10
    Source: https://judge.beecrowd.com/en/problems/view/1110
*/


#include <deque>
#include <iostream>
#include <vector>
using namespace std;
int main () {
    int n;
    while (cin >> n) {
        deque <int> baralho;
        vector <int> descarte;
        for (int i = 1; i <= n; i++) baralho.push_back(i);
        while (baralho.size() > 1) {
            int carta = baralho.front();
            baralho.pop_front();
            descarte.push_back(carta);

            carta = baralho.front();
            baralho.pop_front();
            baralho.push_back(carta);
        }
        cout << "Discarded cards: ";
        for (int i = 0; i < (int)descarte.size(); i++) {
            if (i != (int)descarte.size() - 1) cout << descarte[i] << ", ";
            else cout << descarte[i] << endl;
        }
        cout << "Remaining card: " << baralho[0] << endl;
    }
}