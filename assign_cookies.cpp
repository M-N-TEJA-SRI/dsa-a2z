#include <iostream>
#include<algorithm>
using namespace std;
int main() {
   int n,m;
   cin>>n>>m;
   int i,j,c=0;
  int cookies[n],greed[m];
  for(i=0;i<n;i++){
      cin>>cookies[i];
  }
  for(i=0;i<m;i++){
      cin>>greed[i];
  }
  sort(cookies,cookies+n);
  sort(greed,greed+m);
  i=0,j=0;
  while(i<n&&j<m){
      if(cookies[i]>=greed[j]){
          c++;
          j++;
      }
      i++;
      
  }
  cout<<c;
    return 0;
}
/*
output
2 3
8 9
2 3 4
2
   */
