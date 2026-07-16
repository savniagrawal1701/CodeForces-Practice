#include <iostream>

using namespace std;

void solve() {
    long long x, y, a;
    cin >> x >> y >> a;
    
    
    long long remainder = a % (x + y);
    
    
    if (remainder < x) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
