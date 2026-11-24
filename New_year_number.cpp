#include <bits/stdc++.h>

using namespace std;

bool fxn(int n, vector<int>& memo) {
    if (n == 0) return true;
    if (n < 0) return false;
    if (memo[n] != -1) return memo[n];

    bool zero = fxn(n - 2020, memo);
    bool one = fxn(n - 2021, memo);

    return memo[n] = (zero || one);
}

string solve(int n, vector<int>& memo) {
    return fxn(n, memo) ? "YES" : "NO";
}

int main() {
    int t;
    if (cin >> t) {
        vector<int> memo(1000005, -1);
        while (t--) {
            int n;
            cin >> n;
            cout << solve(n, memo) << "\n";
        }
    }

    return 0;
}