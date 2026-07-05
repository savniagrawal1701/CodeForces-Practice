#include <bits/stdc++.h>

using namespace std;

int solve(int n , vector<int> & a)
{
    int count=0;
    
    vector<int> hash(10005, 0);
    
    for(int i =0;i<n;i++){
        hash[a[i]]++;
    }
    
    
    for(int j=0;j<10005;j++){
        if(hash[j]>1){
            count=count+hash[j]-1;
        }else{
            continue;
        }
    }
    if(count%2==0)return n-count;
    else return n-count-1;
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
