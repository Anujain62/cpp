//binary to decimal conversion
#include<iostream>
using namespace std;
int main(){
    int n,m,sum=0,pow=1,rem;
    cout<<"enter a binary number:";
    cin>>n;
    m=n;
    while(n!=0){
        rem=n%10;
        sum+=(rem*pow);
        pow*=2;
        n/=10;
    }
    cout<<"decimal number of "<<m<<" is "<<sum;
    return 0;
}
