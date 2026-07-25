#include <iostream>
#include <string>
#include<vector>

using namespace std;

int  solve(int n, const vector<int>& a)
{
    int op=1;
    int maxi = a[0];
    for(int i =1;i<n;i++){
        if(a[i]>=maxi){
op++;
maxi=a[i];
        }
    }
    return op;
}

int main()
{
    
    
    int t;
    if (cin >> t) {
        while (t--)
        {
            int n;
            cin >> n;

            vector<int> a(n);
            for (int i = 0; i < n; i++) {
                cin >> a[i];
            }
            
            cout << solve(n, a) << "\n";
        }
    }
    return 0;
}