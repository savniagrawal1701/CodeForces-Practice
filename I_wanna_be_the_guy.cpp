#include <iostream>
#include <vector>

using namespace std;

bool canPassAll(int n, const vector<int>& x_levels, const vector<int>& y_levels) {
    vector<bool> visited(n + 1, false);
    int unique_count = 0;
    
    for (int level : x_levels) {
        if (!visited[level]) {
            visited[level] = true;
            unique_count++;
        }
    }
    
    for (int level : y_levels) {
        if (!visited[level]) {
            visited[level] = true;
            unique_count++;
        }
    }
    
    return unique_count == n;
}

int main() {
    int n;
    if (!(cin >> n)) return 0;
    
    int p;
    cin >> p;
    vector<int> x_levels(p);
    for (int i = 0; i < p; ++i) {
        cin >> x_levels[i];
    }
    
    int q;
    cin >> q;
    vector<int> y_levels(q);
    for (int i = 0; i < q; ++i) {
        cin >> y_levels[i];
    }
    
    if (canPassAll(n, x_levels, y_levels)) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }
    
    return 0;
}
