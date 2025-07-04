#include <iostream>
#include<stack>
using namespace std;
int main() {
   string s;
   cin>>s;
   stack<char>st;
   int i;
   for(i=0;i<s.length();i++){
       if(st.empty()==true)
       st.push(s[i]);
       else if((s[i]==')'&&st.top()=='(')||(s[i]==']'&&st.top()=='[')||(s[i]=='}'&&st.top()=='{'))
       st.pop();
       else
       st.push(s[i]);
   }
   if(st.empty()==true)
   cout<<"valid parentheses\n";
   else
   cout<<"not valid\n";
    return 0;
}
/*output
([])
valid parentheses
*/
