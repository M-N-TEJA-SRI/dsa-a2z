// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
    int n,i,sum=0,t,l,r;
cin>>n;
int a[n];
vector<int>pre;
for(i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
    pre.push_back(sum);
    
}
cin>>t;
while(t--){
    cin>>l>>r;
    l--;
    r--;
    if(l==0)
    cout<<pre[r]<<"\n";
    else
    cout<<pre[r]-pre[l-1]<<"\n";
}
    return 0;
}
/*
5
1 2 3 4 5
3
1 3
2 5
1 5
6
14
15
*/
