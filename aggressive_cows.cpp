#include <iostream>
#include<climits>
#include<algorithm>
using namespace std;
int search(int a[],int n,int mid){
    int c=1,last=a[0],i;
    for(i=1;i<n;i++){
if(a[i]-last>=mid){
    c++;
    last=a[i];
}
    }
    return c;
}
int main() {
   int n,k,i,l=INT_MAX,h=INT_MIN,mid,ans=-1,x;
   cin>>n>>k;
   int a[n];
   for(i=0;i<n;i++){
       cin>>a[i];
       l=min(l,a[i]);
     h=max(h,a[i]);
   }
   sort(a,a+n);
   if(k==1)
   cout<<-1;
   else if(k==2)
   cout<<h-l;
   else{
   while(l<=h){
       mid=(l+h)/2;
       x=search(a,n,mid);
       if(x>=k)
       {
           ans=mid;
           l=mid+1;
       }
       else
       h=mid-1;
   }
  cout<<ans; 
}
    return 0;
}
/*output
5 3
1 2 8 4 9
3*/
