#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main () {
    map <string, string> salvar_linguas;
    string pais;
    salvar_linguas["brasil"] = "Feliz Natal!";
    salvar_linguas["alemanha"] = "Frohliche Weihnachten!";
    salvar_linguas["austria"] = "Frohe Weihnacht!";
    salvar_linguas["coreia"] = "Chuk Sung Tan!";
    salvar_linguas["espanha"] = "Feliz Navidad!";
    salvar_linguas["grecia"] = "Kala Christougena!";
    salvar_linguas["estados-unidos"] = "Merry Christmas!";
    salvar_linguas["inglaterra"] = "Merry Christmas!";
    salvar_linguas["australia"] = "Merry Christmas!";
    salvar_linguas["portugal"] = "Feliz Natal!";
    salvar_linguas["suecia"] = "God Jul!";
    salvar_linguas["turquia"] = "Mutlu Noeller";
    salvar_linguas["argentina"] = "Feliz Navidad!";
    salvar_linguas["chile"] = "Feliz Navidad!";
    salvar_linguas["mexico"] = "Feliz Navidad!";
    salvar_linguas["antardida"] = "Merry Christmas!";
    salvar_linguas["canada"] = "Merry Christmas!";
    salvar_linguas["irlanda"] = "Nollaig Shona Dhuit!";
    salvar_linguas["belgica"] = "Zalig Kerstfeest!";
    salvar_linguas["italia"] = "Buon Natale!";
    salvar_linguas["libia"] = "Buon Natale!";
    salvar_linguas["siria"] = "Milad Mubarak!";
    salvar_linguas["marrocos"] = "Milad Mubarak!";
    salvar_linguas["japao"] = "Merii Kurisumasu!!";
    while (cin >> pais) {
        auto it = salvar_linguas.find(pais);
        if (it != salvar_linguas.end()) cout << it -> second;
        else cout << "--- NOT FOUND---\n";
    }
}