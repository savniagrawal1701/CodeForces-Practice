#include <bits/stdc++.h>

using namespace std;

int solve(int n, int m) {
    int count = 0;
    
    
    for (int a = 0; a * a <= n; ++a) {
        int b = n - (a * a);
        
        
        if (a + (b * b) == m) {
            count++;
        }
    }
    
    return count;
}

int main() {
   
    int n, m;
    if (cin >> n >> m) {
        cout << solve(n, m) <<endl;
    }
    
    return 0;
}