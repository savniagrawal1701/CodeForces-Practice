#include <bits/stdc++.h>

using namespace std;

int solve(int n, int a, int b) {
    int cost1 = n * a;
    int cost2 = (n / 2) * b + (n % 2) * a;
    return min(cost1, cost2);
}

int main() {
    
    int t;
    if (cin >> t) {
        while (t--) {
            int n, a, b;
            cin >> n >> a >> b;
            cout << solve(n, a, b) << endl;
        }
    }
    
    return 0;
}