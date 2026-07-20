/*
    Level: 5/10
    Source: https://judge.beecrowd.com/en/problems/view/1026
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

unsigned int Mofiz_method (unsigned int x, unsigned int y) {
    string binary_x = "", binary_y = "", binary_z = "";
    while (x > 0) {
        if (x % 2 == 0) binary_x = "0" + binary_x;
        else binary_x = "1" + binary_x;
        x /= 2;
    }
    while (y > 0) {
        if (y % 2 == 0) binary_y = "0" + binary_y;
        else binary_y = "1" + binary_y;
        y /= 2;
    }
    
    unsigned int decimal = 0;
    
    int max_lenght = max(binary_x.size(), binary_y.size());

    while (binary_x.size() < max_lenght) binary_x = "0" + binary_x;
    while (binary_y.size() < max_lenght) binary_y = "0" + binary_y;

    for (int i = 0; i < max_lenght; i++) {
        if (binary_x [i] == binary_y [i]) binary_z += '0';
        else binary_z += '1';
    }

    for (int i = 0; i < binary_z.size(); i++) {
        if (binary_z[i] == '1') {
            decimal += pow (2, binary_z.size() - i - 1);
        }
    }
    return decimal;
}

int main () {
    unsigned int x, y;
    while (cin >> x >> y) {
        cout << Mofiz_method (x, y) << endl;
    }
}

/*  training logic (it's only to pratice my logic).

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

unsigned int Mofiz_method (unsigned int x, unsigned int y) {
    string binary_x = "", binary_y = "", binary_z = "";
    while (x > 0) {
        if (x % 2 == 0) binary_x = "0" + binary_x;
        else binary_x = "1" + binary_x;
        x /= 2;
    }
    while (y > 0) {
        if (y % 2 == 0) binary_y = "0" + binary_y;
        else binary_y = "1" + binary_y;
        y /= 2;
    }
    
    unsigned int decimal = 0;
    
    int max_lenght = max(binary_x.size(), binary_y.size());

    while (binary_x.size() < max_lenght) binary_x = "0" + binary_x;
    while (binary_y.size() < max_lenght) binary_y = "0" + binary_y;

    for (int i = 0; i < max_lenght; i++) {
        if (binary_x [i] == binary_y [i]) binary_z += '0';
        else binary_z += '1';
    }

    for (int i = 0; i < binary_z.size(); i++) {
        if (binary_z[i] == '1') {
            decimal += pow (2, binary_z.size() - i - 1);
        }
    }
    return decimal;
}

int main () {
    unsigned int x, y;
    while (cin >> x >> y) {
        cout << Mofiz_method (x, y) << endl;
    }
}
*/