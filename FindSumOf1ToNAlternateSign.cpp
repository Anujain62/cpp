/** 1-2+3-4+5-6+7-8+.....**/
#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter a number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==0)
            sum-=i;
        else
            sum+=i;
    }
    cout<<sum;
    return 0;
}

