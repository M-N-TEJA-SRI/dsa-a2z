// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
int main() {
   int n,m;
   cin>>n>>m;
   vector<int>v[n+1];
   int i,x,y;
   for(i=0;i<m;i++){
       cin>>x>>y;
       v[x].push_back(y);
       v[y].push_back(x);
   }
   for(i=1;i<=n;i++){
       sort(v[i].begin(),v[i].end(),greater<int>());
   }
   stack<int>st;
   vector<int>ans,visited(n+1,0);
   st.push(1);
   visited[1]=1;
   while(!st.empty()){
       x=st.top();
       st.pop();
       ans.push_back(x);
       for(auto it:v[x]){
           if(!visited[it]){
               visited[it]=1;
               st.push(it);
           }
       }
   }
   for(auto it:ans){
       cout<<it<<" ";
   }
    return 0;
}
/*output
5 5
1 2
1 3
2 4
3 4
4 5
1 2 4 5 3 */
