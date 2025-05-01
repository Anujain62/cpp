#include<iostream>
using namespace std;
int main(){
    int a,b,k,power=1,ans;
    cout<<"enter value of a,b,k:";
    cin>>a>>b>>k;
    for(int i=1;i<=b;i++)
        power*=a;
    while(k>0){
        ans=power%10;
        power/=10;
        k--;
    }
    cout<<"Kth digit of a raised to power b :"<<ans;
}

