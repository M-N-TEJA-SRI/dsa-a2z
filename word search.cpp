// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
bool search(vector<vector<char>>&v,string word,int i,int j,int ind,int n,int m){
    if(ind==word.length())
    return true;
    else if(i<0||j<0||i>=n||j>=m||v[i][j]!=word[ind]||v[i][j]=='!')
    return false;
    char ch=v[i][j];
    v[i][j]='!';
    bool ans=search(v,word,i+1,j,ind+1,n,m)||search(v,word,i,j+1,ind+1,n,m)||search(v,word,i-1,j,ind+1,n,m)||search(v,word,i,j-1,ind+1,n,m);
    v[i][j]=ch;
    return ans;
}
int main() {
   int n,m,ind=0,i,j,flag=0;
   cin>>n>>m;
   vector<vector<char>>v(n,vector<char>(m));
   for(i=0;i<n;i++){
       for(j=0;j<m;j++){
           cin>>v[i][j];
       }
   }
   string word;
   cin>>word;
   for(i=0;i<n;i++){
       for(j=0;j<m;j++)
       {
           if(v[i][j]==word[ind]){
               if(search(v,word,i,j,ind,n,m)==true){
                   flag=1;
                   break;
               }
           }
       }
   }
   cout<<flag;
    return 0;
}
/*
output
3 3
T E E 
S G s
U V W
GEEK
0
*/
