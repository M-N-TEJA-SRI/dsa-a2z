// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<queue>
using namespace std;
int main() {
   int n,m,i,x,y;
   cin>>n>>m;
   vector<int>v[n+1];
   for(i=0;i<m;i++){
       cin>>x>>y;
       v[x].push_back(y);
       v[y].push_back(x);
   }
   queue<int>q;
   vector<int>visited(n+1,0);
   vector<int>ans;
   q.push(1);
   visited[1]=1;
   while(!q.empty()){
       x=q.front();
       q.pop();
       ans.push_back(x);
       for(auto it:v[x]){
           if(!visited[it]){
               visited[it]=1;
               q.push(it);
           }
       }
   }
   for(auto it:ans){
       cout<<it<<" ";
   }
   
    return 0;
}
/*output
6 6
1 2 
2 3
3 4
4 5
5 6
6 1
1 2 6 3 5 4 
*/
