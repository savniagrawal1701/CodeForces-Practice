#include <bits/stdc++.h>

using namespace std;

string solve(int n, string& s) {
    int open = 0;
    int close = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            open++;
        } else {
            close++;
        }
    }
    if (open - close == 0) return "YES";
    else return "NO";
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