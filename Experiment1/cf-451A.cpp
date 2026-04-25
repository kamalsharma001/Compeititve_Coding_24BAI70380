#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    
    // Read the number of horizontal (n) and vertical (m) sticks
    if (cin >> n >> m) {
        // The game ends after min(n, m) moves
        int total_moves = min(n, m);
        
        // If the number of moves is odd, the first player (Akshat) wins
        if (total_moves % 2 != 0) {
            cout << "Akshat" << endl;
        } else {
            // If the number of moves is even, the second player (Malvika) wins
            cout << "Malvika" << endl;
        }
    }
    
    return 0;
}
