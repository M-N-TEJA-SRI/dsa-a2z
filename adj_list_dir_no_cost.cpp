// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
   int n,m;
   cin>>n>>m;
   int i,j,x,y;
  vector<int>v[n+1];
   for(i=0;i<m;i++){
       cin>>x>>y;
       v[x].push_back(y);
   }
   for(i=0;i<n+1;i++){
       cout<<i<<"[ ";
       for(auto it:v[i]){
           cout<<it<<" ";
       }
       cout<<"]\n";
   }
    return 0;
}
/*
output
5 4
1 2
1 3
2 4
5 1
0[  ]
1[ 2 3 ]
2[ 4 ]
3[ ]
4[ ]
5[ 1 ]

*/
