/*
    Level: 1/10
    Source: https://judge.beecrowd.com/en/problems/view/2239
*/

#include <iostream>
using namespace std;
int main () {
    int c, p ,f;
    cin >> c >> p >> f;

    if (c <= p/f) cout << "S\n";
    else cout << "N\n";
}