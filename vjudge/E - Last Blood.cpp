#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, t, m;
    cin >> n >> t >> m;
    string check;
    pair <int, int> tempo_timeID;
    set <pair<char, int>> JáFez;
    map <char, pair <int, int>> contest;
    char problem;
    for (int i = 0; i < m; i++) {
        cin >> tempo_timeID.first >> tempo_timeID.second >> problem >> check;
        if (check == "Yes") {
            if (JáFez.find({problem, tempo_timeID.second}) == JáFez.end()) {
                contest[problem] = {tempo_timeID.first, tempo_timeID.second};
            }
        } 
    }
    for (int i = 0; i < n; i++) {
        char c = 'A' + i;
        if (contest.find(c) == contest.end()) cout << c <<  " - -\n";
        else cout << c << " " << contest[c].first << " " << contest[c].second << "\n";
    }
}