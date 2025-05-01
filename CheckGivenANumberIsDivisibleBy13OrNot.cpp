#include<iostream>
using namespace std;
int main(){
    int n,ans;
    cout<<"enter a number:";
    cin>>n;
    while(n<100){
        int x=n%10;
        n/=10;
        ans=n+x*4;
        n=ans;
    }
    if(n%13==0)
        cout<<"number is divisible by 13";
    else
        cout<<"number is not divisible by 13";
}
