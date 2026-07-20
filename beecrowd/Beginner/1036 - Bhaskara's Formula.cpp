/**
 * Judge: Beecrowd
 * Level: 3/10
 * Link: https://judge.beecrowd.com/en/problems/view/1036
 */

#include <stdio.h>
#include <math.h>

int main () {
    double r1, r2, a, b, c, delta;
    
    scanf ("%lf %lf %lf", &a, &b, &c);
    
    delta = ((b*b) - 4 * (a) * (c));
    if (delta < 0 || a == 0) {
        printf ("Impossivel calcular\n");
    }
    
    else {
        if (delta == 0) {
            r1 = (-b + sqrt (delta))/(2*a);
            printf ("R1 = %.5lf\n", r1);
        }
        else {
            r1 = (-b + sqrt (delta))/(2*a);
            r2 = (-b - sqrt (delta))/(2*a);
            printf ("R1 = %.5lf\n", r1);
            printf ("R2 = %.5lf\n", r2);
    }
}
}