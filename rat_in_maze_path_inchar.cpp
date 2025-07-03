// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
void rat(vector<vector<int>>&v,int n,int m,int i,int j,vector<string>&ans,string s){
    if(i<0||j<0||i>=n||j>=m||v[i][j]==0||v[i][j]==2)
    return ;
    else if(i==n-1&&j==m-1)
   {
       ans.push_back(s);
       return;
   }
    v[i][j]=2;
     rat(v,n,m,i-1,j,ans,s+'U');
     rat(v,n,m,i,j+1,ans,s+'R');
     rat(v,n,m,i,j-1,ans,s+'L');
     rat(v,n,m,i+1,j,ans,s+'D');
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
 rat(v,n,m,0,0,ans,s);
 for(auto it:ans){
     cout<<it<<" ";
 }
    return 0;
}
/*output
3 3
1 0 0
1 1 0
0 1 1
DRDR*/
