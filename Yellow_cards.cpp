#include <bits/stdc++.h>

using namespace std;

pair<int, int> solve(int a1, int a2, int k1, int k2, int n) {
    int safe = a1 * (k1 - 1) + a2 * (k2 - 1);
    int mn = (n > safe) ? (n - safe) : 0;

    int mx = 0;
    if (k1 < k2) {
        int c1 = min(a1, n / k1);
        mx = c1 + min(a2, (n - c1 * k1) / k2);
    } else {
        int c2 = min(a2, n / k2);
        mx = c2 + min(a1, (n - c2 * k2) / k1);
    }

    return {mn, mx};
}

int main() {
    int a1, a2, k1, k2, n;
    if (cin >> a1 >> a2 >> k1 >> k2 >> n) {
        auto [mn, mx] = solve(a1, a2, k1, k2, n);
        cout << mn << " " << mx << "\n";
    }

    return 0;
}