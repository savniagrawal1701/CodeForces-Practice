#include <bits/stdc++.h>

using namespace std;

long long solve(long long a, long long b, long long k) {
    long long ans = 0;
    if (k % 2 == 0) {
        ans = a * (k / 2) - b * (k / 2);
    } else {
        ans = a * ((k + 1) / 2) - b * (k / 2); 
    }
    return ans;
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            long long a, b, k;
            cin >> a >> b >> k;
            cout << solve(a, b, k) << endl;
        }
    }
    
    return 0;
}