#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector<long long>& x) {
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++) {
        if (x[i] % 2 == 0) even++;
        else odd++;
    }
    return min(even, odd);
}

int main() {
    int n;
    if (cin >> n) {
        vector<long long> x(n);
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }
        cout << solve(n, x) << "\n";
    }

    return 0;
}