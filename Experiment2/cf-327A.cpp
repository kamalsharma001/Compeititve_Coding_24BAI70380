#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    int ones_count = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) ones_count++;
    }

    int max_gain = -1;
    int current_gain = 0;

    for (int i = 0; i < n; i++) {
        int gain_val = (a[i] == 0) ? 1 : -1;
        current_gain += gain_val;
        
        if (current_gain > max_gain) {
            max_gain = current_gain;
        }

        if (current_gain < 0) {
            current_gain = 0;
        }
    }

    cout << ones_count + max_gain << endl;

    return 0;
}
