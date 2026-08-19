
#include <iostream>
#include <algorithm>

using namespace std;

void solve(int s1, int s2 ,int s3 ,int s ){
    
    int maxi=max(s1,max(s2,max(s3,s)));
    
    //  int a=maxi-s1;
    // int b =s2-a;
    // int c=maxi-(a+b);
    // cout<<a<<b<<c;
        if (s1 != maxi) cout << maxi - s1 << " ";
    if (s2 != maxi) cout << maxi - s2 << " ";
    if (s3 != maxi) cout << maxi - s3 << " ";
    if (s != maxi) cout << maxi - s << " ";
    
    cout << endl;

}

int main() {
    
    int x1, x2, x3, x4;
    
    
    if (cin >> x1 >> x2 >> x3 >> x4) {
        solve(x1, x2, x3, x4);
    }
    
    return 0;
}
