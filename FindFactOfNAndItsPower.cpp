#include<iostream>
using namespace std;
int main(){
    int n,fact,power,sum=0;
    cin>>n;
    for(int i=1;i<=n;i+=2){
        fact=1;
        for(int j=1;j<=i;j++)
            fact*=j;
        power=1;
        for(int k=1;k<=i;k++)
            power*=fact;
        sum+=power;
    }
    cout<<sum;
    return 0;
}
