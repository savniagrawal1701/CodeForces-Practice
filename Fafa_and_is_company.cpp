#include <bits/stdc++.h>

using namespace std;

int solve(int n) {
    int cnt = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    
    int n;
    if (cin >> n) {
        cout << solve(n) << "\n";
    }
    
    return 0;
}