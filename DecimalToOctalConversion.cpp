#include<iostream>
using namespace std;
int main(){
    int n,m,sum=0,pow=1,rem;
    cout<<"enter a decimal number:";
    cin>>n;
    m=n;
    while(n!=0){
        rem=n%8;
        sum+=(rem*pow);
        pow*=10;
        n/=8;
    }
    cout<<"Octal number of "<<m<<" is "<<sum;
}
