// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
   string s,t;
   cin>>s>>t;
   int n=s.length(),m=t.length();
   int i,j;
   vector<vector<int>>v(n+1,vector<int>(m+1,0));
   for(i=1;i<=n;i++){
       for(j=1;j<=m;j++){
           if(s[i-1]==t[j-1])
           v[i][j]=1+v[i-1][j-1];
           else
           v[i][j]=max(v[i-1][j],v[i][j-1]);
       }
   }
cout<<v[n][m];
    return 0;
}
/*
output
abcde
ace
3
  */
