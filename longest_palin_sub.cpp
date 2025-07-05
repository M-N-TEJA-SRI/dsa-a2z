// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
 string s;
 cin>>s;
 int i,j,k,maxi=0;
for(i=0;i<s.length();i++){
    j=i;
    k=i;
    while(j>=0&&k<s.length()&&s[j]==s[k]){
        maxi=max(maxi,k-j+1);
        j--;
        k++;
    }
    j=i+1;
    k=i;
    while(j>=0&&k<s.length()&&s[j]==s[k]){
        maxi=max(maxi,k-j+i);
        j--;
        k++;
    }
}
cout<<maxi;
    return 0;
}
/*output
babad3
*/
