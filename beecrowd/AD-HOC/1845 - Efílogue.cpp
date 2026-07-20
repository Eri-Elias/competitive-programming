#include <stdio.h>
int main () {	
	int c;
    char ultimo_f = '0';
    c = getchar ();
    while (c != EOF) {
        if (c == 'p' or c == 's' or c == 'v' or c == 'z' or c == 'x' or c == 'b' or c == 'j') {
            c = 'f';
        }
        else {
            if (c == 'P' or c == 'S' or c == 'V' or c == 'Z' or c == 'X' or c == 'B' or c == 'J') {
                c = 'F';
            }
        }
        if (!((c == 'f' or c == 'F') && (ultimo_f == 'f' or ultimo_f == 'F'))) {
            putchar (c);
            if (c == 'f' or c == 'F') {
                ultimo_f = c;
            }
            else {
                ultimo_f = '0';
            }
        }
        c = getchar ();
    }
}