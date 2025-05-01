#include<iostream>
using namespace std;
int main(){
    int n,x,ans=1,a;
    cout<<"enter a number:";
    cin>>n;
    if(n==1)
        cout<<"1";
    for(int i=1;i<=n/2;i++){
        x=i*i;
        if(x==n || x<n && x>ans){
            ans=x;
            a=i;
        }
    }
    cout<<"square root of "<<n<<" is "<<a;
}

