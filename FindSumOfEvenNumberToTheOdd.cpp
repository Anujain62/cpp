#include<iostream>
using namespace std;
int main(){
    int n,count=1,ans,sum=0;
    cin>>n;
    for(int i=2;i<=n;i+=2){
            ans=1;
        for(int j=1;j<=count;j++){
            ans*=i;
        }
        count+=2;
        sum+=ans;
    }
    cout<<sum;
    return 0;
}
