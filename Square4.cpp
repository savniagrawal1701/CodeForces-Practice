#include <bits/stdc++.h>

using namespace std;

int solve(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
    int x[4] = {x1, x2, x3, x4};
    int y[4] = {y1, y2, y3, y4};
    int side = 0;
    for (int i = 1; i < 4; i++) {
        if (x[i] == x[0]) {
            side = abs(y[i] - y[0]);
            break;
        } else if (y[i] == y[0]) {
            side = abs(x[i] - x[0]);
            break;
        }
    }
    return side * side;
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int x1, y1, x2, y2, x3, y3, x4, y4;
            cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
            cout << solve(x1, y1, x2, y2, x3, y3, x4, y4) << "\n";
        }
    }
    
    return 0;
}