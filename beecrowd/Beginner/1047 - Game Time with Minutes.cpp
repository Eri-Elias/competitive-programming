/**
 * Level: 9/10
 * Link: https://judge.beecrowd.com/en/problems/view/1047
*/

#include <stdio.h>

int main () {
    
    int hi,inicio,final,mi,hf,mf,tempototal,tempoinicio,tempofinal,h = 0,m = 0;
    
    scanf ("%d %d %d %d", &hi, &mi, &hf, &mf);
    
    inicio = (60 * hi + mi); // expressao que converte tempo inicial em minutos
    final = (60 * hf + mf); // expressao que converte tempo final em minutos
    
    if (inicio > final) {
        tempototal = 1440 + final - inicio; // tempo total caso inicio seja > que final
        h = tempototal/60;
        m = tempototal%60;
    }
    
    else { // bloco caso final seja > que inicio.
        if (final - inicio >= 60) {
            h = (final - inicio)/60;
            m = (final - inicio)%60;
        }
        
        else {
            m = (final - inicio);
        }
        
            if (inicio == final) {
            h = 24;
            m = 0;
        }
    }
    
    printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
}