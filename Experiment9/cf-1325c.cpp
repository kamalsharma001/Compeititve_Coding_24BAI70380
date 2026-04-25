#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
struct Edge {
    int u, v, id;
};
 
int main() {
    int n;
    cin >> n;
 
    vector<Edge> edges(n - 1);
    vector<int> degree(n + 1, 0);
    for (int i = 0; i < n - 1; i++) {
        cin >> edges[i].u >> edges[i].v;
        edges[i].id = i;
        degree[edges[i].u]++;
        degree[edges[i].v]++;
    }
 
    vector<int> result(n - 1, -1);
    int junction = -1;
 
    for (int i = 1; i <= n; i++) {
        if (degree[i] >= 3) {
            junction = i;
            break;
        }
    }
 
    int current = 0;
    if (junction != -1) {
        for (int i = 0; i < n - 1; i++) {
            if (edges[i].u == junction || edges[i].v == junction) {
                if (current < 3) {
                    result[i] = current++;
                }
            }
        }
    }
 
    for (int i = 0; i < n - 1; i++) {
        if (result[i] == -1) {
            result[i] = current++;
        }
    }
 
    for (int i = 0; i < n - 1; i++) {
        cout << result[i] << endl;
    }
 
    return 0;
}
