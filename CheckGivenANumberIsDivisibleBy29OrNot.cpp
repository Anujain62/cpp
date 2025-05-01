#include<iostream>
using namespace std;
int main(){
    long long int n;
    cout<<"enter a number:";
    cin>>n;
    while(n<100){
        int x=n%10;
        n/=10;
        int ans=n+x*3;
        n=ans;
    }
    if(n%29==0)
        cout<<"number is divisible by 29";
    else
        cout<<"number is not divisible by 29";
}

