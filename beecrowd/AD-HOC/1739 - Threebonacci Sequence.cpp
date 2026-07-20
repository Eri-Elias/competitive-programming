/*
    Level: 4/10
    Source: https://judge.beecrowd.com/en/problems/view/1739
*/

#include <stdio.h>
int main () {
	int t;
	long long int n, threebonacci, eof, fib;
	eof = scanf ("%lld", &n);
	while (eof == 1) {
		long long int a = 1, b = 1, test, i = 0;
		while (i < n) {
			fib = a + b;
			a = b;
			b = fib;
			test = fib;
			int cond = 0;
			if (test % 3 == 0) {
				threebonacci = fib;
				i++;
			}
			else {
				while (test && !cond) {
					if (test % 10 == 3) {
						i++;
						threebonacci = fib;
						cond = 1;
					}
					test /= 10;
				}
			}
		}
		printf ("%lld\n", threebonacci);
		eof = scanf ("%lld", &n);
	}
}