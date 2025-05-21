/**enter a number and find first and second number factorial and check its factorial
present in its number or not **/

#include<iostream>
using namespace std;
int fun(int x,int n){
    int fact=1,k,k1,k2,ans=0,m;
    m=n;
    for(int i=1;i<=x;i++)
        fact*=i;
    if(fact>9){
      while(n>0){
        k=n%100;
        k1=k;
        k2=0;
        while(k>0){
            k2=k2*10+k%10;
            k/=10;
        }
        if(k1==fact){
             ans=k1;
             break;
        }
        if(k2==fact){
            ans=k2;
            break;
        }
        n/=10;
      }
      if(ans==0)
        cout<<"factorial of "<<x<<" is not present in this "<<m<<" number"<<endl;
      else
        cout<<"factorial of "<<x<<" is "<<fact<<" present in this "<<m<<" number"<<endl;
    }
    else{
        while(n>0){
            k=n%10;
            if(k==fact){
                ans=k;
                break;
            }
            n/=10;
        }
      if(ans==0)
        cout<<"factorial of "<<x<<" is not present in this "<<m<<" number"<<endl;
      else
        cout<<"factorial of "<<x<<" is "<<fact<<" present in this "<<m<<" number"<<endl;
    }
}
int main(){
    int n,m,x=0;
    cin>>n;
    while(n>0){
        int rem=n%10;
        x=x*10+rem;
        n/=10;
    }
    int rem=x%10;
    x/=10;
    fun(rem,x);
    rem=x%10;
    x/=10;
    fun(rem,x);
    return 0;
}
