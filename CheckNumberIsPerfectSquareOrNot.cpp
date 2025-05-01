#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter a number:";
    cin>>n;
    for(i=1;i<=n/2;i++){
        int x=i*i;
        if(x==n)
            break;
    }
    if(i==n/2+1)
        cout<<"number is not perfect square";
    else
        cout<<"number is perfect square";
}
