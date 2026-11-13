#include <bits/stdc++.h>

using namespace std;

int solve(string& s) {
    string pi = "3141592653589793238462643383279";
    int cnt = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == pi[i]) {
            cnt++;
        } else {
            break;
        }
    }
    return cnt;
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            string s;
            cin >> s;
            cout << solve(s) << "\n";
        }
    }
    
    return 0;
}