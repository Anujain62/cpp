#include<iostream>
#include<cmath>
using namespace std;
int main(){
    unsigned long n,m,rem,sum=0,k=0,i;
    cout<<"enter a binary number:";
    cin>>n;
    m=n;
    while(n!=0){
       rem=n%10;
       i=pow(2,k);
       sum=sum+(rem*i);
       n/=10;
       k++;
    }
    cout<<"decimal number of "<< m <<" is "<<sum;
    return 0;
}
