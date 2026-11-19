#include <bits/stdc++.h>

using namespace std;

int solve(int b, int c, int h) {
    int filling = c + h;
    int f = min(filling, b - 1);
    return 2 * f + 1;
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int b, c, h;
            cin >> b >> c >> h;
            cout << solve(b, c, h) << "\n";
        }
    }

    return 0;
}