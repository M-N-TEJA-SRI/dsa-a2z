// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
   int n,m;
   cin>>n>>m;
   int i,j,x,y,cost;
  vector<pair<int,int>>v[n+1];
   for(i=0;i<m;i++){
       cin>>x>>y>>cost;
       v[x].push_back({y,cost});
   }
   for(i=0;i<n+1;i++){
       cout<<i<<"[ ";
       for(auto it:v[i]){
           cout<<"["<<it.first<<","<<it.second<<"]";
       }
       cout<<"]\n";
   }
    return 0;
}
/*output
5 6
1 2 10
1 3 5
2 4 3
3 4 2
4 5 1
5 1 7
0[ ]
1[ [2,10][3,5] ]
2[ [4,3] ]
3[ [4,2] ]
4[ [5,1] ]
5[ [1,7] ]

*/
