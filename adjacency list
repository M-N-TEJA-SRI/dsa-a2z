#include <iostream>
#include<vector>
using namespace std;
int main() {
    int n,m,x,y;
    cin>>n>>m;
    vector<vector<int>>v(n+1,vector<int>(n+1,0));
    int i,j;
    for(i=0;i<m;i++){
        cin>>x>>y;
        v[x][y]=1;
        v[y][x]=1;
    }
    for(i=0;i<n+1;i++){
        for(j=0;j<n+1;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
output
5 6
1 2
1 3
2 4
3 4
4 5
3 5
0 0 0 0 0 0 
0 0 1 1 0 0 
0 1 0 0 1 0 
0 1 0 0 1 1 
0 0 1 1 0 1 
0 0 0 1 1 0 
