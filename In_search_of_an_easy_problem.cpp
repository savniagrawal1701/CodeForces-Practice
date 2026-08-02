#include <iostream>
#include <string>
#include<vector>

using namespace std;

string solve(int n, const vector<int>& a)
{
    for(int i =0;i<a.size();i++){
        if(a[i]==1){
            return "HARD";
        }
    }
    return "EASY";
}

int main()
{
 
            int n;
            cin >> n;

            vector<int> a(n);
            for (int i = 0; i < n; i++) {
                cin >> a[i];
            }
            
            cout << solve(n, a) << "\n";
      
    return 0;
}