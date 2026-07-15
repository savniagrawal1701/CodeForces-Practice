#include <iostream>

using namespace std;

void solve(char a) {
    if (a == 'c' || a == 'o' || a == 'd' || a == 'e' || a == 'f' || a == 'r' || a == 's') {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t; 
    while (t--) {
        char a;
        cin >> a;
        solve(a);
    }
    
    return 0;
}
