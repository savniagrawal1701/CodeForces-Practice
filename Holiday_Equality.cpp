#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


long long getMinimumBurles(int n, vector<int>& a) {
    if (n == 0) return 0;
    
    
    int max_val = *max_element(a.begin(), a.end());
    
    long long total = 0;
    
    for (int i = 0; i < n; ++i) {
        total += (max_val - a[i]);
    }
    
    return total;
}

int main() {
    int n;
    if (cin >> n) {
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        
        cout << getMinimumBurles(n, a) << "\n";
    }
    
    return 0;
}
