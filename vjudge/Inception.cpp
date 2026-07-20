#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main () {
    int n;
    cin >> n;
    stack <string> resultado;
    while (n--) {
        string comando;
        cin >> comando;
        if (comando == "Sleep") {
            string nome;
            cin >> nome;
            resultado.push(nome);
        }
        else if (comando == "Kick" && !resultado.empty()) {
            resultado.pop();
        }
        else if (comando == "Test") {
            if (!resultado.empty()) cout << resultado.top() << endl;
            else cout << "Not in a dream\n";
        }        
    }
}