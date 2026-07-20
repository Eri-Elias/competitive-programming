#include <stdio.h>
int main () {
	long int menor_n, valor;
	int cond;
	long int n;
	cond = 1;
	menor_n = 0;
	while (scanf ("%ld", &n) != EOF) {
		if (cond) {
			if (n > menor_n) {
				menor_n = n;
			}
			else {
                menor_n = menor_n + 1;
                cond = 0;
			}
		}
	}
	if (!cond) {
	    printf ("%ld\n", menor_n);
    }
    else {
        printf ("%ld\n", menor_n + 1);
    }
}