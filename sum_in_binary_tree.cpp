#include <iostream>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    long long total_sum = 0;
    
    while (n > 0) {
        total_sum += n;
        n /= 2; 
    }
    
    cout << total_sum << "\n";
}

int main() {
   
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
