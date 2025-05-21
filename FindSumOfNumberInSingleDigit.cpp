/**WAP to accept any number and display the sum of its each digit until you get single digit**/
#include<iostream>
using namespace std;
int main(){
    int n,sum=0,m;
    cout<<"enter a number:";
    cin>>n;
    while(n>0){
        int rem=n%10;
        sum+=rem;
        n/=10;
    }
    while(sum>9){
        m=sum;
        sum=0;
        while(m>0){
            int rem=m%10;
            sum+=rem;
            m/=10;
        }
    }
    cout<<"sum = "<<sum;
    return 0;
}
