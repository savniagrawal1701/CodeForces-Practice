#include <bits/stdc++.h>

using namespace std;

string solve(int x, int y) {
    if (x % 2 != 0 && y % 2 != 0) {
        return "NO";
    }
    return "YES";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        cout << solve(x, y) << endl;
    }
    return 0;
}