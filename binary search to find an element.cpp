#include <iostream>
using namespace std;
int main() {
   int n,key;
   cin>>n>>key;
   int a[n],i,l=0,h=n-1,mid,ans=-1;
   for(i=0;i<n;i++){
       cin>>a[i];
   }
  while(l<=h){
      mid=(l+h)/2;
      if(a[mid]==key)
      {
          ans=mid;
          break;
      }
      else if(a[mid]>key)
      h=mid-1;
      else
      l=mid+1;
  }
  cout<<ans;
    return 0;
}
/*output
6 4
1 2 3 4 5 0
3
*/
