#include <bits/stdc++.h>

using namespace std;

string solve(int s1, int s2, int s3, int s4) {
    int m1 = max(s1, s2);
    int m2 = max(s3, s4);
    
    vector<int> a = {s1, s2, s3, s4};
    sort(a.begin(), a.end());
    
    int max1 = a[3];
    int max2 = a[2];
    
    if ((m1 == max1 && m2 == max2) || (m1 == max2 && m2 == max1)) {
        return "YES";
    }
    return "NO";
}

int main() {
    
    int t;
    if (cin >> t) {
        while (t--) {
            int s1, s2, s3, s4;
            cin >> s1 >> s2 >> s3 >> s4;
            cout << solve(s1, s2, s3, s4) << "\n";
        }
    }
    
    return 0;
}