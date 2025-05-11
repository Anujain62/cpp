#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    float x;
    for(int i=0;i<=2*n;i++){
        for(int j=0;j<=2*n;j++){
            x=sqrt((i-n)*(i-n)+(j-n)*(j-n));
            if(x>n-0.5 && x<n+0.5)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}
