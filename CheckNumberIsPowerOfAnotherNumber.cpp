/** check if a number is a power of another number or not **/
#include<iostream>
using namespace std;
int main(){
    int n,m,power=1,x=0;
    cout<<"enter n and m:";
    cin>>n>>m;
    if(n==1 && m!=1)
        cout<<"number "<<n<<" to the any power is not equal to "<<m<<endl;
    while(power<m){
        power*=n;
        x++;
    }
    if(power==m)
      cout<<"Number "<<n<<" to the power "<<x<<" is equal to "<<m;
    else
      cout<<"Number "<<n<<" to the any power is not equal to "<<m;
    return 0;
}
