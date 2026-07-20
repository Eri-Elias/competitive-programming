#include <iostream>
#include <string>
using namespace std;

int digital_root (const string &s) {
    int soma = 0;
    for (char c : s) soma += c - '0';
    if (soma == 0) return 0;
    int dr = 1 + ((soma - 1) % 9);
    return dr;
}
int main () {
    string n, m;
    
    while (cin >> n >> m) {
        if (n == "0" && m == "0") break;
        int drN = digital_root(n);
        int drM = digital_root(m);
        if (drN > drM) cout << 1 << endl;
        else if (drM > drN) cout << 2 << endl;
        else cout << 0 << endl;
    }
}