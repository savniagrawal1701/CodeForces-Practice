#include <bits/stdc++.h>

using namespace std;

string solve(int n, int t, string s) {
    while (t--) {
        string res = s;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == 'B' && s[i + 1] == 'G') {
                res[i] = 'G';
                res[i + 1] = 'B';
            }
        }
        s = res;
    }
    return s;
}

int main() {
    int n, t;
    string s;
    if (cin >> n >> t >> s) {
        cout << solve(n, t, s) << "\n";
    }

    return 0;
}