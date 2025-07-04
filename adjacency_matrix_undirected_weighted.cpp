// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
   int n,m;
   cin>>n>>m;
   vector<vector<int>>v(n+1,vector<int>(n+1));
   int i,x,y,j,cost;
   for(i=0;i<m;i++){
       cin>>x>>y>>cost;
       v[x][y]=cost;
       v[y][x]=cost;
   }
   for(i=0;i<n+1;i++){
       for(j=0;j<n+1;j++){
           cout<<v[i][j]<<" ";
       }
       cout<<"\n";
   }
    return 0;
}
/*output
4 3
1 2 10
2 3 5
4 1 7
0 0 0 0 0 
0 0 10 0 7 
0 10 0 5 0 
0 0 5 0 0 
0 7 0 0 0 

*/
