/*
    Level: 2/10
    Source: https://judge.beecrowd.com/en/problems/view/1340
*/

#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main () {
    int n;
    pair <int, int> x; // first ação - second valor 
    cin >> n;
    while (cin >> n) {
        bool q_check = true, s_check = true, pq_check = true;
        queue <int> queue;
        stack <int> stack;
        priority_queue <int> pq;
        for (int i = 0; i < n; ++i) {
            cin >> x.first >> x.second;
            if (x.first == 1) {
                queue.push(x.first);
                stack.push(x.first);
                pq.push(x.first);
            }
            else {
                if (!queue.empty()) {
                    int topVal = queue.front();
                    queue.pop();
                    if (topVal != x.second) q_check = false; 
                }
                if (!stack.empty()) {
                    int topVal = stack.top();
                    stack.pop();
                    if (topVal != x.second) s_check = false;
                }
                if (!pq.empty()) {
                    int topVal = pq.top();
                    pq.pop();
                    if (topVal != x.second) pq_check = false;
                }
            }
            if (pq_check && s_check && q_check || q_check && s_check || 
                pq_check && q_check || s_check && q_check) cout << "not sure\n";
            else if (pq_check) cout << "priority queue\n";
            else if (s_check) cout << "stack\n";
            else if (q_check) cout << "queue\n";
            else cout << "impossible\n";
        }
    }
}
