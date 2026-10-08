#include <bits/stdc++.h>
using namespace std;
string solve(int a, int b, int c) {
    
    if (a + b >= 10 || b + c >= 10 || a + c >= 10) {
        return "YES";
    }
    return "NO";
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int a, b, c;
            cin >> a >> b >> c;
            cout << solve(a, b, c) << "\n";
        }}
    
    return 0;
}