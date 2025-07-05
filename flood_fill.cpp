// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
void dfs(vector<vector<int>>&v,int n,int m,int i,int j,int oldcolor,int newcolor){
    if(i<0||j<0||i>=n||j>=m||v[i][j]!=oldcolor)
    return;
    v[i][j]=newcolor;
    dfs(v,n,m,i-1,j,oldcolor,newcolor);
    dfs(v,n,m,i+1,j,oldcolor,newcolor);
    dfs(v,n,m,i,j-1,oldcolor,newcolor);
    dfs(v,n,m,i,j+1,oldcolor,newcolor);
}
int main() {
   int n,m,sr,sc,newcolor,oldcolor,i,j;
   cin>>n>>m>>sr>>sc>>newcolor;
   vector<vector<int>>v(n,vector<int>(m));
   for(i=0;i<n;i++){
       for(j=0;j<m;j++){
           cin>>v[i][j];
       }
   }
   oldcolor=v[sr][sc];
   if(oldcolor!=newcolor){
       dfs(v,n,m,sr,sc,oldcolor,newcolor);
   }
   for(i=0;i<n;i++){
       for(j=0;j<m;j++){
           cout<<v[i][j]<<" ";
       }
       cout<<"\n";
   }
    return 0;
}
/*
output
4 5 1 2 9
1 1 1 2 2
1 1 1 2 0
1 0 0 2 2
2 2 2 2 2

9 9 9 2 2 
9 9 9 2 0 
9 0 0 2 2 
2 2 2 2 2 
*/
