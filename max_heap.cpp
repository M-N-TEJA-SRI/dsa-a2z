// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
   int n,i,flag=1;
   cin>>n;
   int a[n];
   for(i=0;i<n;i++){
       cin>>a[i];
   }
   for(i=0;i<=(n-2)/2;i++){
       if(a[i]<a[(2*i)+1]||a[i]<a[(2*i)+2])
       {
           flag=0;
           break;
       }
   }
   if(flag==1)
   cout<<"max heap";
   else
   cout<<"not max heap";

    return 0;
}
/*
output
5
9 5 6 2 3
max heap
*/
