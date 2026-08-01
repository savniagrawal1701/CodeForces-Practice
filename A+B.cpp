#include <iostream>
#include <string>

using namespace std;

int solve(string s)
{
    int a=s[0]-'0';
    int b =s[2]-'0';
    return a+b;
  
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }
    return 0;
}
