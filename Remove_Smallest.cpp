#include<bits/stdc++.h>

using namespace std;


bool solve(int n, vector<int>& a) {
    
    sort(a.begin(), a.end());
    
    
    for (int i = 0; i < n - 1; ++i) {
        if (a[i + 1] - a[i] > 1) {
            return false; 
        }
    }
    
    return true; 
}

int main() {
    
    
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            
            vector<int> a(n);
            for (int i = 0; i < n; ++i) {
                cin >> a[i];
            }
            
            
            if (solve(n, a)) {
                cout << "YES"<<endl;
            } else {
                cout << "NO"<<endl;
            }
        }
    }
    
    return 0;
}
