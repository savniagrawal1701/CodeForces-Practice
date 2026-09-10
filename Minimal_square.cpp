#include<bits/stdc++.h>

using namespace std;

int solve(int a, int b) {
    int side1 = max(2 * a, b);
    int side2 = max(a, 2 * b);
    int side = min(side1, side2);
    return side * side;
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int a, b;
            cin >> a >> b;
            cout << solve(a, b) << "\n";
        }
    }
    return 0;
}
