#include <bits/stdc++.h>

using namespace std;

string solve(int n, int m) {
    if (n >= m && (n - m) % 2 == 0) {
        return "Yes";
    }
    return "No";
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n, m;
            cin >> n >> m;
            cout << solve(n, m) << "\n";
        }
    }
    
    return 0;
}