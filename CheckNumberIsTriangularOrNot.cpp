#include<iostream>
using namespace std;
int main(){
    int n,i=1,ans=0;
    cout<<"enter a number:";
    cin>>n;
    while(ans<=n){
        ans+=i;
        if(ans==n){
            break;
        }
        i++;
    }
    if(ans<=n)
        cout<<"number is triangular number";
    else
        cout<<"number is not triangular number";
}

