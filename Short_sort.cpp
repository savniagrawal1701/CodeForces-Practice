#include <iostream>
#include <string>

using namespace std;

string solve(string s)
{
   
    string comp="abc";
     if(s==comp)return "YES";
    int count=0;
    for(int i =0;i<=2;i++){
if(s[i]==comp[i]){
    count++;
}else{
    continue;
}
    }
    if(count==1 ){
        return "YES";
    }else{
        return "NO";
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
