#include <iostream>
#include <string>

using namespace std;

// Solves a single test case
string solve(int x , int y) {
    if(x%y==0) return "YES";
    else return "NO";
}

int main() {
  
    int t;
    cin >> t; // Reads the number of test cases
    while (t--) {
        int x,y;
        cin>>x>>y;
        string ans = solve(x,y);
        cout<<ans<<endl;
    }
    
    return 0;
}
