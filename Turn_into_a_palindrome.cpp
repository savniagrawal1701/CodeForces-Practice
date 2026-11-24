#include <bits/stdc++.h>

using namespace std;

int convert(int n, char c, string& s) {
    int i = 0;
    int j = n - 1;
    int cnt = 0;

    while (i < j) {
        if (s[i] != s[j]) {
            if (s[i] == c || s[j] == c) {
                cnt += 1;
            } else {
                cnt += 2;
            }
        }
        i++;
        j--;
    }

    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            char c;
            string s;
            cin >> n >> c >> s;

            cout << convert(n, c, s) << "\n";
        }
    }

    return 0;
}