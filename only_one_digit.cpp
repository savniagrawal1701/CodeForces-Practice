#include <iostream>
#include <string>

using namespace std;

int  solve(int num)
{
    
if (num == 0) return 0;

    int digi=0;
    int small=1000;
    while(num>0){
digi=num%10;
small=min(digi,small);
num=num/10;
    }
    return small;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n ;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}
