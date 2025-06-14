#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:"<<endl;
    cin>>n;
    for(int i=2;i<=n;i++){
        while(n%i==0){
            cout<<i<<" ";
            n/=i;
        }
    }
    /*int i=2;
    while(n>1){
        if(n%i==0 && i<=num){
            n/=i;
            cout<<i<<" ";
        }
        else
        i++;
    }
    return 0;
}
