#include<iostream>
using namespace std;
int main(){
    double n,a,r,sum,power=1;
    cout<<"enter value of n , a , r:";
    cin>>n>>a>>r;
    for(int i=1;i<=n;i++){
        power*=r;
    }                                                              //(Sn=a(1-rn)/(1-r))
    sum = a*(1-power) / (1-r);
    cout<<"sum = "<<sum;
}
