/** 1,3,6,10,15,21......**/
#include<iostream>
using namespace std;
int main(){
    int n,m=0;
    cout<<"enter term number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        m+=i;
    }
    cout<<n<<"th term is "<<m;
    return 0;
}
