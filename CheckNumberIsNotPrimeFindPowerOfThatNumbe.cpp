#include<iostream>
using namespace std;
int main(){
   int n,m,i;
   long int pow=1;
      cout<<"enter a number:";
      cin>>n;
      for(i=2;i<=n/2;i++){
        if((n%i)==0){
             m=n;
             cout<<"\nenter a new number:";
             cin>>n;
             for(int i=0;i<n;i++){
                  pow*=m;
               }
           cout<<m<<" to the power "<<n<<" is "<<pow;
        }
        else{
             cout<<"\ngiven number "<<n<<" is prime";
             break;
        }
      }
    return 0;
}


