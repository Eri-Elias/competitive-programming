#include <iostream>
#include <set>
#include <string>
using namespace std;

int main () {
    set<char> name;
    string input;

    cin >> input;
    for (int i = 0; i < input.size(); i++) {
        name.insert(input[i]);
    }

    if (name.size() % 2 == 0) cout << "CHAT WITH HER!\n";
    else cout << "IGNORE HIM!\n";
}