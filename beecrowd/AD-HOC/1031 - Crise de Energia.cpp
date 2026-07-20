#include <iostream>
using namespace std;
int josephus(int n, int k) {
    int res = 0;
    for (int i = 2; i < n; ++i) {
        res = (res + k) % i;
    }
    return res;
}
int main() {
    int N;
    while (cin >> N && N) {
        int m = 1;
        while ((josephus(N, m) + 1) != 12) {
            ++m;
        }
        cout << m << endl;
    }
}