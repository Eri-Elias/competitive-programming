/*
    Problem: 1021 - Banknotes
    Level: 4/10
    Source: https://judge.beecrowd.com/en/problems/view/1018
*/

#include <stdio.h>

int main () {

    int n,a,b,c,d,e,f,g,z;
    
    scanf ("%d", &n);
    z = n;
    
    a = n/100; // 100$
    n %= 100;
    
    b = n/50; //50$
    n %= 50;
    
    c = n/20; //20$
    n %= 20;
    
    d = n/10; //10$
    n %= 10;
    
    e = n/5; // 5$
    n %= 5;
    
    f = n/2; // 2$
    n %= 2;
    
    g = n/1; // 1$
    n %= 1;
    
    printf ("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", z, a, b, c, d, e, f, g);
    
}