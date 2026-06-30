#include <iostream>
#include <string>

using namespace std;

string solve(string s)
{
    int lower = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == tolower(s[i]))
        {
            lower++;
        }
        else
        {
            continue;
        }
    }
    int upper = s.size() - lower;
    for (int i = 0; i < s.size(); i++)
    {
        if (upper > lower)
        {
            s[i] = toupper(s[i]);
        }
        else
        {
            s[i] = tolower(s[i]);
        }
    }
    return s;
}

int main()
{

    string s;
    cin >> s;
    cout << solve(s) << endl;
    return 0;
}
