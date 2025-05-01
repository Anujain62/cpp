#include<iostream>
using namespace std;
int main(){
    int n,sum=0,a;
    cout<<"enter a number:";
    cin>>n;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    while(sum>9){
            a=0;
        while(sum>0){
            a+=sum%10;
            sum/=10;
        }
        sum=a;
    }
    cout<<"sum = "<<sum;
}

