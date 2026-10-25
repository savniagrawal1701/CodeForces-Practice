#include <bits/stdc++.h>

using namespace std;

void solve(int x, int k) {
    // if (x % k != 0) {
    //     cout << 1 << endl << x << endl;
    // } else {
    //     if (x % 2 == 0) {
    //         cout << 2 << endl;
    //         cout << 3 << " " << x - 3 << endl;
    //     } else if (x % 3 == 0) {
    //         cout << 2 << endl;
    //         cout << 1 << " " << x - 1 << endl;
    //     } else {
    //         cout << 2 << endl;
    //         cout << 1 << " " << x - 1 << endl;
    //     }
    // }
    if (x % k != 0) {
        cout << 1 << "\n" << x << "\n";
    } else {
        cout << 2 << "\n";
        cout << 1 << " " << x - 1 << "\n";
    }
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int x, k;
            cin >> x >> k;
            solve(x, k);
        }
    }
    
    return 0;
}