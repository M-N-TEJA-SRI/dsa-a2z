// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
void build(vector<int>&seg,int a[],int i,int low,int high){
    if(low==high){
        seg[i]=a[low];
        return;
    }
    else{
        int mid=(low+high)/2;
        build(seg,a,2*i+1,low,mid);
        build(seg,a,2*i+2,mid+1,high);
        seg[i]=max(seg[2*i+1],seg[2*i+2]);
    }
}
int overlap(vector<int>&seg,int i,int left,int right,int low,int high){
    if(high<left||right<low)
    return 0;
    else if(left<=low&&high<=right)
    return seg[i];
    else
    {
        int mid=(low+high)/2;
        int x=overlap(seg,2*i+1,left,right,low,mid);
        int y=overlap(seg,2*i+2,left,right,mid+1,high);
        return max(x,y);
    }
}
void update(vector<int>&seg,int i,int ind,int x,int low,int high){
    if(low==high){
        seg[i]=x;
        return;
    }
    int mid=(low+high)/2;
    if(ind<=mid)
    update(seg,2*i+1,ind,x,low,mid);
    else
    update(seg,2*i+2,ind,x,mid+1,high);
    seg[i]=max(seg[2*i+1],seg[2*i+2]);
}
int main() {
    int n,i;
    cin>>n;
    int a[n];
    vector<int>seg(4*n,0);
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    i=0;
    build(seg,a,i,0,n-1);
int t,q,left,right,ind,x;
cin>>t;
while(t--){
    cin>>q;
    if(q==1){
        i=0;
        cin>>left>>right;
        cout<<overlap(seg,i,left,right,0,n-1)<<"\n";
    }
    else{
        i=0;
        cin>>ind>>x;
        update(seg,i,ind,x,0,n-1);
    }
}
    return 0;
}
/*
output
5
1 3 5 7 9
3
1 1 3   // Max in range [1,3]
2 2 10  // Update index 2 to 10
1 0 4   // Max in full range
7
10*/
