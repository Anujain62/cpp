#include<iostream>
using namespace std;
int main(){
    unsigned long n,m,i,j=0,k,a[50];
    cout<<"enter a decimal number:";
    cin>>n;
    m=n;
    while(n!=0){
        k=n%16;

        a[j]=k;
        j++;
        n=n/16;
    }
    cout<<"hexadecimal number number of "<<m<<" is ";
    for(i=j-1;i>=0;i--){
        if(a[i]>9)
            {
                char x=a[i]+55;
                cout<<" "<<x;
            }
        else
            cout<<"  "<<a[i];
    }
    return 0;
}
