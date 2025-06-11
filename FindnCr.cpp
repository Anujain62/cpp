#include<iostream>                             /**C(n,r)= n!/r!(n-r)!**/
using namespace std;
int main(){
    double n,r,fact1=1.0,fact2=1.0,fact3=1.0,ans;
    cout<<"enter value of n and r:";
    cin>>n>>r;
    for(int i=1;i<=n;i++)
        fact1*=i;
    for(int i=1;i<=r;i++)
        fact2*=i;
    for(int i=1;i<=n-r;i++)
        fact3*=i;
    ans=fact1/(fact2*fact3);
    cout<<n<<"c"<<r<<" choices is: "<<ans;
}
