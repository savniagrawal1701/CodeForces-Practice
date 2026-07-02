#include <iostream>
#include <string>

using namespace std;

string solve(string s)
{
    int n = s.size();

    if (n > 10)
    {
        string str = s[0] + to_string(n - 2) + s[n - 1];
        return str;
    }
    else
    {
        return s;
    }
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
