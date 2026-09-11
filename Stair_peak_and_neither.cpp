#include <iostream>

using namespace std;

void solve(int a , int b , int c) {
  
    if (a < b && b < c) {
        cout << "STAIR"<<endl;
    } else if (a < b && b > c) {
        cout << "PEAK"<<endl;
    } else {
        cout << "NONE"<<endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
    cin >> a >> b >> c;
        solve(a,b,c);
    }
    
    return 0;
}
