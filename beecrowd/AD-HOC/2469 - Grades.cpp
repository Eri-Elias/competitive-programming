/*
    Level: 4/10
    Source: https://judge.beecrowd.com/en/problems/view/2469
*/

#include <stdio.h>
int main () {
    int n, nota, i, total[101] = {0}, total_nota = 0, nota_maior;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d", &nota);
        total[nota]++;
    }
    for (i = 0; i < 101; i++) {
        if (total[i] >= total_nota) {
            total_nota = total[i];
            nota_maior = i;
        }
    }
    printf ("%d\n", nota_maior);
}