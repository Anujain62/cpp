#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter a number:";
    cin>>n;
    for(i=0;i<n-1;i++){
        for(j=1;j<n-i;j++){
            cout<<" ";
        }
        for(j=0;j<=2*i;j++){
            if(j==0 || j==2*i)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    for(i=0;i<n;i++)
        cout<<"* ";
    return 0;
}
