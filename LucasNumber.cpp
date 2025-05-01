/** 2,1,3,4,11,18,29,47,76,123,.......**/

#include<iostream>
using namespace std;
int main(){
    int n,a=2,b=1,ans;
    cout<<"enter a number:";
    cin>>n;
    ans=a+b;
    if(n==0)
        cout<<a;
    if(n==1)
        cout<<b;
    if(n==2)
        cout<<ans;
    for(int i=3;i<=n;i++){
        a=b;
        b=ans;
        ans=a+b;
    }
    cout<<"sum = "<<ans;
}

