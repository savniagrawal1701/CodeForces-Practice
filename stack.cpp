#include <iostream>
#include <string>
#include <stack>
#include <cctype>

using namespace std;



    int evaluateStack(string s) {
        stack<int > st;
        for(int i =0;i<s.size();i++){
            if(isdigit(s[i])){
                st.push(s[i]-'0');
            }else{
                int a=st.top();
                st.pop();
                int b= st.top();
                st.pop();
            
                if (s[i] == '+') st.push(a+b);
                if (s[i] == '*') st.push(a*b);
            }
        }
        return st.top();
    }


int main() {
   string s ;
   cin>>s;
   int ans = evaluateStack(s);
   cout<<ans;
return 0 ; 
}
