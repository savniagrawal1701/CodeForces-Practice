#include <iostream>
#include <string>

using namespace std;

string square (int a , int b , int c, int d) {
   
    if (a == b && b == c && c == d) 
        return "YES";
    else 
        return "NO";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << square(a, b, c, d) << endl;
    }
    return 0;
}
