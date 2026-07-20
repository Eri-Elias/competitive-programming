/*
    Judge: Beecrowd
    Level: 4/9
    Source: https://judge.beecrowd.com/en/problems/view/1002
*/

#include <stdio.h>

int main () {
    
    double raio,area;
    
    scanf ("%lf", &raio);
    area = (3.14159 * raio * raio);
    printf ("A=%.4lf\n", area);
    return 0;
}