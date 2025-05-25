#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:"<<endl;
    cin>>n;
    int org=n;
    int count=0;
    while(n>0){
        int rem=n%10;
        count++;
        n/=10;
    }
    int mul;
    int sum=0;
    n = org;
    while(n>0){
        int rem=n%10;
        mul = 1;
        for(int i=1;i<=count;i++){
            mul = (mul*rem);
        }
        cout << mul <<  endl;
        sum+=mul;
        n/=10;
    }
    if(org==sum)
        cout<<org<<"number is armstrong number";
    else
        cout<<org<<"number is not armstrong number";
    return 0;
}
