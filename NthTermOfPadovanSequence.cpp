/** 1,1,1,2,2,3,4,5,7,9,12,16,21,28,37,.....**/
#include<iostream>
using namespace std;
int main(){
    int n,ans,a=1,b=1,c=1;
    cout<<"enter a number:";
    cin>>n;
    if(n==1 || n==2 || n==3)
        cout<<a;
    ans=a+b;
    for(int i=4;i<=n;i++){
        a=b;
        b=c;
        c=ans;
        ans=a+b;
    }
    cout<<"Nth term of Padovan Sequence is:"<<ans;
}

