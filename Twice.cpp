#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int  solve(int n , vector<int> & a) {
vector<int> dup (n+1,0);
for(int i =0;i<n;i++){
    dup[a[i]]++;
}
int count=0;
for(int i =0;i<=n;i++){
count=count+dup[i]/2;
}
return count;
}

int main()
{
    
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            vector<int> a(n);
            for(int i = 0; i < n; i++) {
                cin >> a[i];
            }
            cout << solve(n, a) << "\n";
        }
    }
    return 0;
}

