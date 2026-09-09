#include <bits/stdc++.h>

using namespace std;


string getLargestNumber(int n, char d, string s) {
    int ind = n; 
    
    
    for (int i = 0; i < n; ++i) {
        if (s[i] < d) {
            ind = i;
            break; 
        }
    }
    
    
    s.insert(ind, 1, d);
    return s;
}

int main() {
    
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            char d;
            cin >> n >> d;
            
            string s;
            cin >> s;
            
            
            cout << getLargestNumber(n, d, s) << endl;
        }
    }
    
    return 0;
}
