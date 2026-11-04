#include <bits/stdc++.h>

using namespace std;

string solve(int n, int m, int k) {
    if (m >= n && k >= n) {
        return "Yes";
    }
    return "No";
}

int main() {
    int n, m, k;
    if (cin >> n >> m >> k) {
        cout << solve(n, m, k) << "\n";
    }
    
    return 0;
}