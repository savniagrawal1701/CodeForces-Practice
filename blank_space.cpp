#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int solve(int n, const vector<int>& binary) 
{
    int count = 0;
    int maxi = 0;
    
    for (int i = 0; i < n; i++) {
        if (binary[i] == 0) { 
            count++;
        } else {
            count = 0; 
        }
        maxi = max(maxi, count); 
    }
    return maxi; 
}

int main() 
{
    
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        
        vector<int> binary(n);
        for (int i = 0; i < n; i++) {
            cin >> binary[i];
        }
        
        cout << solve(n, binary) << "\n";
    }
    return 0;
}
