#include <iostream>
#include <string>

using namespace std;

string solve(string s)
{
    int n =s.size();
    for(int i =0;i<n;i++){
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9') return "YES";
     else continue;
}
    return "NO";
}
int main()
{
    string s;
    cin >> s;
    cout << solve(s) << endl;
    return 0;
}
