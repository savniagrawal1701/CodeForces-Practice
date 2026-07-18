#include <iostream>
#include <string>

using namespace std;

int  solve(int x) {
 int y = 999999999 - x;
    return y;
}

int main() {
    
    int t;
    cin >> t; 
    while (t--) {
        int x;
        cin>>x;
        int ans=solve(x);
        cout<<ans<<endl;
    }
    
    return 0;
}
