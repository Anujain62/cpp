/**fact(1)/1^2 + fact(3)/2^4 + fact(5)/3^8 + ........**/

#include<iostream>
using namespace std;
int main(){
    double n,fact,power,loop=2,ans,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        fact=1;
        for(int j=1;j<=2*i-1;j++)
            fact*=j;
        power=1;
        for(int j=1;j<=loop;j++){
            power*=i;
        }
        ans=fact/power;
        sum+=ans;
        loop*=2;
    }
    cout<<sum;
    return 0;
}
