#include <stdio.h>

int main () {
    int h,n,m;
    
    scanf ("%d", &n);
    
    h = n / 3600;
    n = n % 3600;
    m = n / 60;
    n = n % 60;
    // n = já esta em segundos
    
    printf ("%d:%d:%d\n", h,m,n);
    
}