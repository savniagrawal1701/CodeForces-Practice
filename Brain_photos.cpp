#include <bits/stdc++.h>

using namespace std;

string solve(vector<vector<char>> matrix, int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (matrix[i][j] == 'C' || matrix[i][j] == 'M' || matrix[i][j] == 'Y') {
                return "#Color";
            } else {
                continue;
            }
        }
    }
    return "#Black&White";
}

int main() {
    int n, m;
    if (cin >> n >> m) {
        vector<vector<char>> matrix(n, vector<char>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> matrix[i][j];
            }
        }
        cout << solve(matrix, n, m) << "\n";
    }
    
    return 0;
}