#include <iostream>
#include <vector>
#include <map>

using namespace std;

void solve() {
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mp[x]++;
    }
    int u = 0, d = 0;
    for (auto const& [k, v] : mp) {
        if (v == 1) u++;
        else d++;
    }
    cout << 2 * ((u + 1) / 2) + d << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
