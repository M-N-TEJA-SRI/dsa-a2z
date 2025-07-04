#include <iostream>
#include<cmath>
using namespace std;
bool arm(int n){
    int temp=n,dig=log10(n)+1,sum=0;
    while(n){
        sum+=pow(n%10,dig);
        n/=10;
    }
    return sum==temp;
}
int main() {
    int n;
    cin>>n;
cout<<arm(n);
    return 0;
}
/*output
154
0
*/
