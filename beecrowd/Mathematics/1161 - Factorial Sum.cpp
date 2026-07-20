#include <iostream>
using namespace std;
int main () {
	long long int fatn, fatm, i, j;
	int n, m;
	while (cin >> n >> m) {
	    fatn = 1; fatm = 1;
		for (i = 2; i <= n; i++) {
			fatn = fatn * i;
		}
		for (j = 2; j <= m; j++) {
			fatm = fatm * j;
		}
	cout << fatm + fatn << "\n";	
	}
}