#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int N;
    while (cin >> N) {
        // Parte da Copa
        for (int i = 0; i < N / 2 + 1; i++) {
            int num_asteriscos = 2 * i + 1;
            int num_espacos = (N - num_asteriscos) / 2;
            
            for (int j = 0; j < num_espacos; j++) {
                cout << " ";
            }
            for (int j = 0; j < num_asteriscos; j++) {
                cout << "*";
            }
            cout << endl;
        }
        
        // Parte do Tronco (com 3 asteriscos)
        int espacos_tronco3 = (N - 3) / 2;
        for (int i = 0; i < espacos_tronco3; i++) {
            cout << " ";
        }
        cout << "***" << endl;
        
        // Parte do Tronco (com 1 asterisco)
        int espacos_tronco1 = (N - 1) / 2;
        for (int i = 0; i < espacos_tronco1; i++) {
            cout << " ";
        }
        cout << "*" << endl;

        // Linha em branco para separar os casos de teste
        cout << endl;
    }
    return 0;
}