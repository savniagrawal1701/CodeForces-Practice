#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector<string>& magnets) {
    int groups = 1;
    for (int i = 1; i < n; i++) {
        if (magnets[i] != magnets[i - 1]) {
            groups++;
        }
    }
    return groups;
}

int main() {
    int n;
    if (cin >> n) {
        vector<string> magnets(n);
        for (int i = 0; i < n; i++) {
            cin >> magnets[i];
        }
        cout << solve(n, magnets) << "\n";
    }
    
    return 0;
}