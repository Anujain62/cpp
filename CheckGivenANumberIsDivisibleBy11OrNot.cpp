#include<iostream>
using namespace std;
int main(){
    int n,osum=0,esum=0,i=1;
    cout<<"enter a number:";
    cin>>n;
    while(n>0){
        int x=n%10;
        if(i%2==0)
            esum+=x;
        else
            osum+=x;
        n/=10;
        i++;
    }
    int y=osum-esum;
    if(y%11==0)
       cout<<"number is divisible by 11";
    else
        cout<<"number is not divisible by 11";
}

