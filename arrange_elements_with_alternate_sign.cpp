#include <iostream>
#include<vector>
using namespace std;
int main() {
   int n,i,j;
   cin>>n;
   int a[n];
   vector<int>pos,neg,ans;
   for(i=0;i<n;i++){
       cin>>a[i];
       if(a[i]>=0)
       pos.push_back(a[i]);
       else
       neg.push_back(a[i]);
       }
       i=0,j=0;
       while(i<pos.size()&&j<neg.size()){
           ans.push_back(pos[i++]);
           ans.push_back(neg[j++]);
       }
       while(i<pos.size()){
           ans.push_back(pos[i++]);
       }
       while(j<neg.size()){
           ans.push_back(neg[j++]);
       }
       for(auto it:ans){
           cout<<it<<" ";
       }
return 0;
}
/*output
3
-1 2 3
2 -1 3 */
