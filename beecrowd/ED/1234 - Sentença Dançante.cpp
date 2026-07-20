#include <iostream>
#include <string>
using namespace std;
int main () {
    string palavra, resultado;
    char c;
    bool eh_maiuscula;
    while (getline(cin, palavra)) {
        int i = 0;
        eh_maiuscula = true;
        c = palavra[i];
        if (c == ' ') {
            resultado += c;
            i++;
            continue;
        }
        else {
            if (c == tolower(c)) c = toupper(c);
            resultado += c;
            i++;
        while (i < palavra.size()) {
            c = palavra[i];
            if (eh_maiuscula) {
                c = tolower(c);
                resultado += c;
                i++;
            }
            if (!eh_maiuscula) {
                c = toupper (c);
                resultado += c;
                i++;
            }
        }
        cout << resultado << endl;
        cin.ignore();
    }
}