#include <bits/stdc++.h>

using namespace std;

string solve(string w) {
   string res = "";
    int len = w.length();
 
    for (int i = 0; i < len - 2; ++i) {
        res += w[i];
    }
    res += 'i';
    
    return res;
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            string w;
            cin >> w;
            cout << solve(w) << "\n";
        }
    }
    
    return 0;
}