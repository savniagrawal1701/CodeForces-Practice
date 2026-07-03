#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

void solve() {
    int n;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;
    if (c == 'g') {
        cout << 0 << "\n";
        return;
    }
    s += s;
    int max_dist = 0;
    int r = 0;
    for (int l = 0; l < n; ++l) {
        if (s[l] == c) {
            r = max(r, l);
            while (r < 2 * n && s[r] != 'g') {
                r++;
            }
            max_dist = max(max_dist, r - l);
        }
    }
    cout << max_dist << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
