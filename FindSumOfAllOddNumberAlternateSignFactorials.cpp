/**fact(1)-fact(3)+fact(5)-fact(7)...**/

#include<iostream>
using namespace std;
int main(){
    int n,count=1,fact,sum=0;
    cin>>n;
    for(int i=1;i<=n;i+=2){
        fact=1;
        for(int j=1;j<=i;j++)
            fact*=j;
        if(count%2==0)
            sum-=fact;
        else
            sum+=fact;
            count++;
    }
    cout<<sum;
    return 0;
}
