/*
    Level: 3/10
    Source: https://judge.beecrowd.com/en/problems/view/1234
*/

#include <iostream>
#include <string>
using namespace std;
int main () {
	string palavra, resultado;
	char c;
	bool eh_maiuscula;
	while (getline(cin, palavra)) {
		string resultado = "";
		bool eh_maiuscula = true;
		for (char c : palavra) {
			if (c == ' ') {
				resultado += c;
			} else {
				if (eh_maiuscula) resultado += toupper(c);
				else resultado += tolower(c);
				eh_maiuscula = !eh_maiuscula; // alterna
			}
		}
		cout << resultado << endl;
	}
}