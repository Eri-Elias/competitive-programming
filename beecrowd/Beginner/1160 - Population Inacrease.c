#include <stdio.h>
int main () {
    float G1, G2;
    int i, n, cont, PA, PB;
	scanf ("%d", &n);
	for (i = 0; i < n; i ++) {
		cont = 0;
		scanf ("%d %d %f %f", &PA, &PB, &G1, &G2);
		while (PA <= PB && cont <= 100) {
			PA = PA + (int)(PA * (G1/100));
			PB = PB + (int)(PB * (G2/100));
			cont = cont + 1;
		}
		if (cont <= 100) {
	        printf ("%d anos.\n", cont);
    	}
	    else {
	        printf ("Mais de 1 seculo.\n");
	    }	
	}
}