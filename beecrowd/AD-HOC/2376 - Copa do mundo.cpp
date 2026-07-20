#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector <char> times, classificados;
    times.reserve(16);
    classificados.reserve(times.size()/2);
    for (int i = 0; i < 16; i++) times.push_back(char(65 + i));
    pair <int, int> gols;
    int n_times = 16;
    while (n_times > 1) {
        for (int i = 0; i < n_times; i += 2) {
            cin >> gols.first >> gols.second;
            if (gols.first > gols.second) classificados.push_back(times[i]);
            else classificados.push_back(times[i+1]);
        }
        times = classificados;
        classificados.clear();
        classificados.reserve(times.size()/2);
        n_times /= 2;   
    }
    cout << times[0] << endl;
}