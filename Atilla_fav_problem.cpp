#include <bits/stdc++.h>

using namespace std;

int solve(int n, string s) {
    char max_char = 'a';
    
    
    for (int i = 0; i < n; ++i) {
        if (s[i] > max_char) {
            max_char = s[i];
        }
    }
    
    
    return max_char - 'a' + 1;
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            string s;
            cin >> s;
            cout << solve(n, s) << endl;
        }
    }
    
    return 0;
}