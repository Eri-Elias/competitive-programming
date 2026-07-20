#include <stdio.h>
#include <math.h>
int main () {
	int i, j, m;
	int n;
	scanf ("%d", &m);
	for (j = 0; j < m; j = j + 1) {
		scanf ("%d", &n);
		for (i = 2; i <= (float) sqrt (n) && (int)n % i != 0; i = i + 1) {
			// Idenacao um a um.
			// For do cachorro.
		}
		if (i >= sqrt (n)) {
			printf ("Prime\n");
		}
		else {
			printf ("Not Prime\n");
		}
	}
}