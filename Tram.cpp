#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector<int>& a,  vector<int>& b) {
    int curr = 0;
    int capa = 0;
    for (int i = 0; i < n; i++) {
        curr -= a[i];
        curr += b[i];
        capa = max(capa, curr);
    }
    return capa;
}

int main() {
    int n;
    if (cin >> n) {
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i] >> b[i];
        }
        cout << solve(n, a, b) << endl;
    }
    
    return 0;
}