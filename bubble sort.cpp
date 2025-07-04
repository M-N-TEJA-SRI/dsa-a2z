#include <iostream>
using namespace std;
int main() {
   int n,j;
   cin>>n;
   int a[n],i;
   for(i=0;i<n;i++){
       cin>>a[i];
   }
  for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
          if(a[i]>a[j])
          swap(a[i],a[j]);
      }
  }
  for(i=0;i<n;i++){
      cout<<a[i]<<" ";
  }
    return 0;
}
/*output
4
2 2 4 1
1 2 2 4 */
