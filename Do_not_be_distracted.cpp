#include <bits/stdc++.h>

using namespace std;

string solve(int n, string s) {
    unordered_set<char> visited;
    for (int i = 0; i < n; i++) {
        if (i > 0 && s[i] == s[i - 1]) {
            continue;
        }
        if (visited.count(s[i])) {
            return "NO";
        }
        visited.insert(s[i]);
    }
    return "YES";
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            string s;
            cin >> s;
            cout << solve(n, s) << "\n";
        }
    }
    
    return 0;
}