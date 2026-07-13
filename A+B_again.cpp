#include <iostream>
#include <string>

using namespace std;

int  solve(int a )
{
    
int digi1=a%10;
a=a/10;
int digi2=a%10;

return digi1+digi2;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        cout << solve(a) << endl;
    }
    return 0;
}
