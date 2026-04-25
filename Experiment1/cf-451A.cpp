#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    if (cin >> n >> m) {
        int total_moves = min(n, m);
        
        if (total_moves % 2 != 0) {
            cout << "Akshat" << endl;
        } else {
            cout << "Malvika" << endl;
        }
    }
    return 0;
}
