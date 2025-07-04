// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
   int n,m;
   cin>>n>>m;
   vector<pair<int,int>>v[n+1];
   int i,x,y,j,cost;
   for(i=0;i<m;i++){
       cin>>x>>y>>cost;
      v[x].push_back({y,cost});
      v[y].push_back({x,cost});
   }
 for(i=0;i<n+1;i++){
     cout<<i<<"[";
     for(auto it:v[i]){
         cout<<"["<<it.first<<","<<it.second<<"]";
     }
     cout<<"]\n";
 }
    return 0;
}
/*
output
5 4
1 2 6
1 3 2
2 4 8
5 3 4
0[]
1[[2,6][3,2]]
2[[1,6][4,8]]
3[[1,2][5,4]]
4[[2,8]]
5[[3,4]]
*/
