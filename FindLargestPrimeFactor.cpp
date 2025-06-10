#include<iostream>
using namespace std;
int main(){
    int n,factor;
    cout<<"enter a number:";
    cin>>n;
    for(int i=n/2;i>2;i--){
        if(n%i==0){
            factor=i;
            break;
        }
    }
    cout<<"largest factor of "<<n<<" is "<<factor;
}
