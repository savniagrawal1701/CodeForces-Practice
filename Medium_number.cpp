#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solve(int a ,int b ,int c ) {
   int sum=a+b+c;
   int maxi =max(a,max(b,c));
   int mini=min(a,min(b,c));
   return sum-(maxi+mini);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a,b,c;
        cin>>a>>b>>c;
        int ans=solve(a,b,c);
        cout<<ans<<endl;
    }
    return 0;
}
