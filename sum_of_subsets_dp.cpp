// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
bool subset(int a[],int n,int i,int sum,int target,vector<vector<int>>&v){
    bool include=false,exclude=false;
    if(i>=n)
    return sum==target;
    if(v[i][sum]!=-1)
    return v[i][sum];

    if(sum+a[i]<=target)
     include=subset(a,n,i+1,sum+a[i],target,v);
    else
   exclude=subset(a,n,i+1,sum,target,v);
    return v[i][sum]=include||exclude;
}
int main() {
 int n,target,i,sum=0;

 cin>>n>>target;
  vector<vector<int>>v(n+1,vector<int>(target+1,-1));
 int a[n];
 for(i=0;i<n;i++){
     cin>>a[i];
 }
 i=0;
 cout<<subset(a,n,i,sum,target,v);

    return 0;
}
