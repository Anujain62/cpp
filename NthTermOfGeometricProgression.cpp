#include<iostream>
using namespace std;
int main(){
    int a,r,n,ans,x=1;
    cout<<"enter value of a,r,n:";
    cin>>a>>r>>n;
    for(int i=1;i<n;i++)
        x*=r;
    ans=a*x;
    cout<<"nth term of GP:"<<ans;
}

