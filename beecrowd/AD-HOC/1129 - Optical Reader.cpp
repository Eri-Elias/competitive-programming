#include <stdio.h>
int main () {
    int a, b, c, d, e, n, i;
    while (scanf ("%d", &n) && n > 0) {
        for (i = 0; i < n; i = i + 1) {
            scanf ("%d %d %d %d %d", &a, &b, &c, &d, &e);
            if (a <= 127 && b > 127 && c > 127 && d > 127 && e > 127) {
                printf ("A\n");
            }
            else {
                if (b <= 127 && c > 127 && d > 127 && e > 127 && a > 127) {
                    printf ("B\n");
                }
                else {
                    if (c <= 127 && d > 127 && e > 127 && a > 127 && b > 127) {
                        printf ("C\n");
                    }
                    else {
                        if (d <= 127 && a > 127 && b > 127 && c > 127 && e > 127) {
                            printf ("D\n");
                        }
                        else {
                            if (e <= 127 && a > 127 && b > 127 && c > 127 && d > 127) {
                                printf ("E\n");
                            }
                            else {
                                printf ("*\n");
                            }
                        }
                    }
                }
            }
        }
    }
}