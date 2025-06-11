#include<iostream>
using namespace std;
int main()
{
    double n,fact,power;
    double sum=0,ans;
    cin>>n;
    for(int i=1;i<=n;i+=2){
            fact=1;
        for(int j=1;j<=i;j++){
            fact*=j;
        }
        power=1;
        for(int k=1;k<=i;k++){
            power*=i;
        }
        ans=fact/power;
        sum+=ans;
    }
    cout<<sum;
   return 0;
}
