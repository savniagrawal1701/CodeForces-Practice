#include <iostream>
#include <vector>

using namespace std;

int total(vector<int> & arr){ 
    int n = arr.size(); 
    int zerocount = 0; 
    int countneg = 0; 
    
    for(int i = 0; i < n; i++){ 
        if(arr[i] == -1){ 
            countneg = countneg + 1; 
        } 
        else if(arr[i] == 0){ 
            zerocount = zerocount + 1; 
        } 
    } 
    
    // Each zero costs 1 move to become 1.
    // If negatives are odd, it costs 2 moves to turn one (-1) into (1).
    int tc = zerocount + (countneg % 2) * 2; 
    
    return tc; 
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            vector<int> arr(n);
            for (int i = 0; i < n; i++) {
                cin >> arr[i];
            }
            cout << total(arr) << "\n";
        }
    }
    return 0;
}
