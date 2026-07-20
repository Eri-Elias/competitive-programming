#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int cont = 0;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (num != 1) cont++;
    }
    cout << cont << "\n";
}