#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


string getInsideString(string a) {
    
    reverse(a.begin(), a.end());
    
    
    for (char &c : a) {
        if (c == 'p') {
            c = 'q';
        } else if (c == 'q') {
            c = 'p';
        }
        
    }
    return a;
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            string a;
            cin >> a;
            
            
            string b = getInsideString(a);
            cout << b << "\n";
        }
    }
    
    return 0;
}
