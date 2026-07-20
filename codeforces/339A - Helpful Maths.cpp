#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    string input;
    vector <int> numbers;
    cin >> input;

    for (int i = 0; i < input.size(); i+=2) {
        numbers.push_back(input[i] - '0');
    }

    sort(numbers.begin(), numbers.end());
    
    int j;
    for (j = 0; j < numbers.size() - 1; j++) {
        cout << numbers[j] << '+';
    }
    
    cout << numbers.back();
    
    return 0;
}