/**the number is n and it is a perfect square with square root x such that x is prime **/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,b,a=1,j,i=2;
    cout<<"enter a number:";
    cin>>n;
      while(a<=n){
        a=i*i;
        b=sqrt(a);
        if((b*b)==a){
            for(j=2;j<i;j++){
                if(i%j==0)
                    break;
            }
            if(j==i && a<=n)
                cout<<a<<" ";
        }
        i++;
    }
}

