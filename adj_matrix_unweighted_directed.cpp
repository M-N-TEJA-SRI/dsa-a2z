// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
   int n,m,i,x,y,j;
   cin>>n>>m;
   vector<vector<int>>v(n+1,vector<int>(n+1,0));
   for(i=0;i<m;i++){
       cin>>x>>y;
       v[x][y]=1;
   }
   for(i=0;i<n+1;i++){
       for(j=0;j<n+1;j++){
           cout<<v[i][j]<<" ";
       }
       cout<<"\n";
   }

    return 0;
}
/*
output
5 4
2 3 
1 2 
3 4 
4 5 
0 0 0 0 0 0 
0 0 1 0 0 0 
0 0 0 1 0 0 
0 0 0 0 1 0 
0 0 0 0 0 1 
0 0 0 0 0 0 
*/
