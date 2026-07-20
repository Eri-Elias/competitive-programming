#include <stdio.h>
int main () {
    char pe;
    int n, i, cont, tamanho;
    while (scanf ("%d", &n) != EOF) {
        cont = 0; int esq [61] = {0}; int dir [61] = {0};
        for (i = 0; i < n; i = i + 1) { // input do tamanho e do pé.
            scanf ("%d %c", &tamanho, &pe);
            if (pe == 'D') {
                dir[tamanho] = dir[tamanho] + 1;
            }
            else { // achar quantas botas tem de cada numero.
                esq[tamanho] = esq[tamanho] + 1;
            }
        }
        for (i = 30; i < 61; i = i + 1) {
            if (dir[i] == esq[i]) {
                cont = cont + dir[i];
            }
            else {
                if (dir[i] > esq[i]) {
                    cont = cont + esq[i];
                }
                else {
                    cont = cont + dir[i];
                }
            }
        }
        printf ("%d\n", cont);
    }
}