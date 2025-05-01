#include<iostream>
using namespace std;
int main(){
    int n,m,ans=0;
    cout<<"enter two number:";
    cin>>n>>m;
    int x=n<m?n:m;
    for(int i=2;i<=x;i++){
        if(n%i==0 && m%i==0){
            ans=1;
            break;
        }
    }
    if(ans==0)
        cout<<"given numbers are co-prime";
    else
        cout<<"given numbers are not co-prime";
}

