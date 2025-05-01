#include<iostream>
using namespace std;
int main(){
    long int n,sum=0,ans;
    cout<<"enter a number:";
    cin>>n;
    while(n>9){
        int x=n%10;
        n/=10;
        ans=n-(2*x);
        n=ans;
        if(ans<0)
            ans=-ans;
    }
    if(ans%7==0)
       cout<<"number is divisible by 7";
    else
        cout<<"number is not divisible by 7";
}


