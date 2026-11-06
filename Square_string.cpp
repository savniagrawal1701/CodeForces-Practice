#include <bits/stdc++.h>

using namespace std;

string square(string s) {
    int n = s.size();
    if (n % 2 != 0) {
        return "NO";
    }
    int r = 0;
    int l = n / 2;
    while (l < n) {
        if (s[r] == s[l]) {
            l++;
            r++;
        } else {
            return "NO";
        }
    }
    return "YES";
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            string s;
            cin >> s;
            cout << square(s) << "\n";
        }
    }
    
    return 0;
}