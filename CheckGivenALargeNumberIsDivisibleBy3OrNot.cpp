#include<iostream>
using namespace std;
int main(){
    long int n,sum=0;
    cout<<"enter a number:";
    cin>>n;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    if(sum%3==0)
       cout<<"number is divisible by 3";
    else
        cout<<"number is not divisible by 3";
}

