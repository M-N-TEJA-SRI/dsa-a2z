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
   exclude=subset(a,n,i+1,sum,target,v);
    return v[i][sum]=include||exclude;
}
int main() {
 int n,target,i,sum=0;

 cin>>n;
 int a[n];
 for(i=0;i<n;i++){
     cin>>a[i];
     sum+=a[i];
 }
 if(sum%2==1)
 cout<<"false";
 target=sum/2;
 sum=0;
  vector<vector<int>>v(n+1,vector<int>(target+1,-1));
 else{
 i=0;
 cout<<subset(a,n,i,sum,target,v);}

    return 0;
}
