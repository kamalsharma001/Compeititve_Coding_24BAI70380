#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    int first_big_pile = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] > 1) {
            first_big_pile = i;
            break;
        }
    }
 
    if (first_big_pile == -1) {
        if (n % 2 == 1) {
            cout << "First" << endl;
        } else {
            cout << "Second" << endl;
        }
    } else {
        if (first_big_pile % 2 == 0) {
            cout << "First" << endl;
        } else {
            cout << "Second" << endl;
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
