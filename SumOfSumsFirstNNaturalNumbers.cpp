#include<iostream>
using namespace std;
int main(){
    int n,sum,ans=0;
    cout<<"enter a number:";
    cin>>n;
    for(int i=1;i<=n;i++){
            sum=0;
        for(int j=1;j<=i;j++)
            sum+=j;
        ans+=sum;
    }
    cout<<"sum = "<<ans;
}

