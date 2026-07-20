#include <stdio.h>
int main () {
    int i, n, antecessor, sucessor;
    while (scanf ("%d", &n) && n > 0) {
        int cont = 0, onda[10000] = {0};
        for (i = 0; i < n; i = i + 1) {
            scanf ("%d", &onda[i]);
        }
        for (i = 0; i < n; i = i + 1) {
            antecessor = onda[(i-1+n)%n]; // vetor circ.
            sucessor = onda[(i+1+n)%n];
            if (onda[i] > antecessor && onda [i] > sucessor or onda[i] < antecessor && onda [i] < sucessor) {
                cont = cont + 1;
            }// onda atual é maior que as duas antes e sucessora.
        }
        printf ("%d\n", cont);
    }
}