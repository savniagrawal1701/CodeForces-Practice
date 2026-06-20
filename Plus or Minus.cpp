 
#include <iostream>
 
using namespace std;
 
 
char plusminus(int a, int b, int c) {
    if (a + b == c) {
        return '+';
    }else if((a-b==c)){
    return '-';}
}
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t; 
 
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c; 
        
        cout << plusminus(a, b, c) << "\n";
    }
 
    return 0;
}
