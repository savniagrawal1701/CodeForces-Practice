#include <bits/stdc++.h>

using namespace std;

bool dfs(int r, int c, int n, vector<string>& grid, vector<vector<bool>>& vis) {
    if (r < 0 || r >= 2 || c < 0 || c >= n) return false;
    if (grid[r][c] == '1' || vis[r][c]) return false;
    if (r == 1 && c == n - 1) return true;

    vis[r][c] = true;

    int dr[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dc[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

    for (int d = 0; d < 8; d++) {
        if (dfs(r + dr[d], c + dc[d], n, grid, vis)) {
            return true;
        }
    }

    return false;
}

string solve(int n, vector<string>& grid) {
    vector<vector<bool>> vis(2, vector<bool>(n, false));
    if (dfs(0, 0, n, grid, vis)) {
        return "YES";
    }
    return "NO";
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;

            vector<string> grid(2);
            cin >> grid[0] >> grid[1];

            cout << solve(n, grid) << "\n";
        }
    }

    return 0;
}