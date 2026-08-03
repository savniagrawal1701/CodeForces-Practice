#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;

string solve(string s, string s1, int n)
{
    sort(s.begin(), s.end());
    sort(s1.begin(), s1.end());
    if (s == s1) return "YES";
    else return "NO";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s, s1;
        
        cin >> n >> s >> s1; 
        cout << solve(s, s1, n) << endl;
    }
    return 0;
}
