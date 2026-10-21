#include <bits/stdc++.h>

using namespace std;

void solve(long long a, long long b, long long c, long long d) {
    // b, c, c always satisfy the triangle inequalities within the given ranges
    cout << b << " " << c << " " << c << "\n";
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            long long a, b, c, d;
            cin >> a >> b >> c >> d;
            solve(a, b, c, d);
        }
    }
    
    return 0;
}