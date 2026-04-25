#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    if (n == 1) {
        cout << 1 << endl;
        return;
    }
 
    if (n == 2) {
        cout << -1 << endl;
        return;
    }
 
    vector<int> sequence;
 
    for (int i = 1; i <= n * n; i += 2) {
        sequence.push_back(i);
    }
 
    for (int i = 2; i <= n * n; i += 2) {
        sequence.push_back(i);
    }
 
    for (int i = 0; i < n * n; i++) {
        cout << sequence[i];
        if ((i + 1) % n == 0) {
            cout << endl;
        } else {
            cout << " ";
        }
    }
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
