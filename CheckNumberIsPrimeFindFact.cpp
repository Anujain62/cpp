#include<iostream>
using namespace std;
int main(){
     int n,fact=1,i;
     cout<<"enter a number:";
     cin>>n;
     for(i=2;i<n/2;i++){
        if((n%i)==0)
            break;
     }
     if(i==(n/2)){
        while(n>0){
            fact*=n;
            n--;
        }
        cout<<"factorial of a prime number is "<<fact;
     }
     else
        cout<<"number is not prime";
    return 0;
}

