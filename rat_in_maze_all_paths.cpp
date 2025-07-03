// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
void print(vector<vector<int>>&v,int n,int m){
    int i,j;
    for(i=0;i<n;i++){
     for(j=0;j<m;j++){
         if(v[i][j]==2)
         cout<<1<<" ";
         else if(v[i][j]==1)
         cout<<0<<" ";
         else
         cout<<v[i][j]<<" ";
     }
     cout<<"\n";
 }
}
void rat(vector<vector<int>>&v,int n,int m,int i,int j){
    if(i<0||j<0||i>=n||j>=m||v[i][j]==0||v[i][j]==2)
    return ;
    else if(i==n-1&&j==m-1)
   {
       v[i][j]=2;
      print(v,n,m);
      v[i][j]=1;
       return;
   }
    v[i][j]=2;
     rat(v,n,m,i-1,j);
     rat(v,n,m,i,j+1);
     rat(v,n,m,i,j-1);
     rat(v,n,m,i+1,j);
     v[i][j]=1;
}
int main() {
    int n,m,x,y;
    cin>>n>>m;
    vector<string>ans;
    string s="";
    vector<vector<int>>v(n,vector<int>(m));
    int i,j;
   for(i=0;i<n;i++){
       for(j=0;j<m;j++){
           cin>>v[i][j];
       }
   }
   if(v[0][0]==0)
   cout<<"not possible";
   else
 rat(v,n,m,0,0);
 
    return 0;
}
/*
output
3 3
1 0 0
1 1 0
0 1 1

1 0 0 
1 1 0 
0 1 1 

*/
