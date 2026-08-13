#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<int> solve(int n, const vector<string>& grid) {
    vector<int> res(n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (grid[i][j] == '#') {
                res[i] = j + 1;
            }
        }
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> grid(n);
        for (int i = 0; i < n; ++i) {
            cin >> grid[i];
        }
        vector<int> ans = solve(n, grid);
        for (int x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}
