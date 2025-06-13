/** 1^1/2^2 - 2^3/6^4 + 4^5/18^8 ......**/

#include<iostream>
using namespace std;
int main(){
    int n,i,j,k=1,sum=0,z1,z2,m=2,l=2,x=1;
    cin>>n;
    for(i=1;i<=n;i*=2){
        z1=1;
        for(j=1;j<=i;j++)
            z1*=j;
        for(j=1;j<=l;j++)
            z2*=m;
        k*=2;
        m*=3;
        l*=2;
        if(x)
            sum+=(z1/z2);
        else
            sum-=(z1/z2);
        x=!x;
    }
    cout<<sum;
    return 0;
}
