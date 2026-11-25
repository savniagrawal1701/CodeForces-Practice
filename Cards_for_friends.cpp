#include <bits/stdc++.h>

using namespace std;

string solve(long long w, long long h, long long n) {
    long long cutx = 1, cuty = 1;

    while (w % 2 == 0) {
        w /= 2;
        cutx *= 2;
    }

    while (h % 2 == 0) {
        h /= 2;
        cuty *= 2;
    }

    if (cutx * cuty >= n) {
        return "YES";
    }
    return "NO";
}

int main() {

    int t;
    if (cin >> t) {
        while (t--) {
            long long w, h, n;
            cin >> w >> h >> n;
            cout << solve(w, h, n) << "\n";
        }
    }

    return 0;
}