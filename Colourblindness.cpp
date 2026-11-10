#include <bits/stdc++.h>

using namespace std;

string solve(int n, string& s1, string& s2) {
    for (int i = 0; i < n; i++) {
        if (s1[i] == 'G') s1[i] = 'B';
        if (s2[i] == 'G') s2[i] = 'B';
    }
    
    if (s1 == s2) {
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
            string s1, s2;
            cin >> s1 >> s2;
            cout << solve(n, s1, s2) << "\n";
        }
    }
    
    return 0;
}