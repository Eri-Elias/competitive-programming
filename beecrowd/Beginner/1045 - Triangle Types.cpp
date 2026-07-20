/**
 * Level: 5/10
 * Link: https://judge.beecrowd.com/en/problems/view/1045
*/


#include <stdio.h>

int main () {
   
   float a,b,c; 
   
        scanf ("%f %f %f", &a, &b, &c);
            
            if (b > a) {
            float d = a;
            a = b;
            b = d;
            }
            
            if (c > a) {
                float x = a;
                a = c;
                c = x;
            }
 
    if (a >= b + c) {
        printf ("NAO FORMA TRIANGULO\n");
    return 0;
    }
    
    if (a * a == b * b + c * c) {
        printf ("TRIANGULO RETANGULO\n");
            if (a == b && a == c) {
               printf ("TRIANGULO EQUILATERO\n");
               }
            else if (a == b && a != c || a == c && c != b || b == c && c != a) {
                printf ("TRIANGULO ISOSCELES\n");  
            }
        
    }
    
    if (a * a > b * b + c * c) {
        printf ("TRIANGULO OBTUSANGULO\n");
            if (a == b && a == c) {
               printf ("TRIANGULO EQUILATERO\n");
               }
            else if (a == b && a != c || a == c && a != b || b == c && b != a) {
                printf ("TRIANGULO ISOSCELES\n");  
            }
    }
    
    if (a * a < b * b + c * c) {
        printf ("TRIANGULO ACUTANGULO\n");
            if (a == b && a == c) {
               printf ("TRIANGULO EQUILATERO\n");
               }
            else if (a == b && a != c || a == c && a != b || b == c && b != a) {
                printf ("TRIANGULO ISOSCELES\n");  
            }    
    }
}