// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
   int n,i,flag=1;
   cin>>n;
   int a[n];
   for(i=0;i<n;i++){
       cin>>a[i];
   }
   for(i=0;i<=(n-2)/2;i++){
       if(a[i]>a[(2*i)+1]||a[i]>a[(2*i)+2])
       {
           flag=0;
           break;
       }
   }
   if(flag==1)
   cout<<"min heap";
   else
   cout<<"not min heap";

    return 0;
}
/*
output
5
10 20 30 21 23
min heap
*/
