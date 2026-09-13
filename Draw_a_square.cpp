#include <bits/stdc++.h>

using namespace std;

string solve(int l, int r, int d, int u) {
    if (l == r && r == d && d == u) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r, d, u;
        cin >> l >> r >> d >> u;
        cout << solve(l, r, d, u) << "\n";
    }
    
    return 0;
}