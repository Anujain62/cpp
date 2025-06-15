/** 3^5/fact(4) + 6^10/fact(8) + 9^15/fact(12) + .....
      i=3,6,9,...(i+3)
      j=5,10,15,....(j+5)
      k=4,8,12,....(k+4)
**/
#include<iostream>
using namespace std;
int main(){
    double n,power,fact,z=3,j,k=4,x=5,sum=0,div;
    cin>>n;
    for(i=1;i<=n;i++){
        power=1;
        for(j=1;j<=x;j++)
            power*=z;
        fact=1;
        for(j=1;j<=k;j++)
            fact*=j;
        div=power/fact;
        sum+=div;
        //cout<<"x="<<x<<" "<<"z="<<z<<" "<<"k="<<k<<" "<<"sum="<<sum;
        x+=5;
        z+=3;
        k+=4;
    }
    cout<<"sum = "<<sum;
    return 0;
}
