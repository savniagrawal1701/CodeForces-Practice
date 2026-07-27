#include <iostream>
#include <string>

using namespace std;

int  solve(int a , int b , int c, int d )
{
    int count=0;
    if(a<b){
        count++;
    }
     if(a<c){
        count++;
    }
      if(a<d){
        count++;
    }
   return count;
   
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a , b ,c,d;
        cin >> a>>b>>c>>d;
        cout << solve(a,b,c,d) << endl;
    }
    return 0;
}
