/*
    Level: 3/10
    Source: https://judge.beecrowd.com/en/problems/view/1536
*/

#include <stdio.h>
int main () {
    
    int totalgol1,totalgol2,vitoria1,vitoria2,vis2,vis1,i,n,man1,man2; 
    
    scanf ("%d", &n);
    
    for (i = 0; i < n; i = i + 1) {
        totalgol1 = 0;
        totalgol2 = 0;
        vitoria1 = 0;
        vitoria2 = 0;
        scanf ("%d x %d", &man1, &vis2);
        scanf ("%d x %d", &man2, &vis1);
        totalgol1 = man1 + vis1;
        totalgol2 = vis2 + man2;
        if (totalgol1 > totalgol2) {
            vitoria1 = vitoria1 + 1;
        }
        else {
            if (totalgol2 == totalgol1) {
                if (vis1 > vis2) {
                    vitoria1 = vitoria1 + 1;
                }
                else {
                    if (vis2 == vis1) {
                        //Nenhum time ganha.
                    }
                    else {
                    vitoria2 = vitoria2 + 1;
                    }
                }
            }
            else {
                vitoria2 = vitoria2 + 1;
            }
        }
        if (vitoria2 > vitoria1) {
            printf ("Time 2\n");
        }
        else {
            if (vitoria1 == vitoria2) {
                printf ("Penaltis\n");
            }
            else {
                printf ("Time 1\n");
            }
        }
    }
}