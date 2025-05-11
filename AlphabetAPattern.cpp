#include<iostream>
using namespace std;
int main(){
    int n,x=1,j,k;
    cout<<"enter number of rows:";
    cin>>n;
    k=n;
    for(int i=0;i<n;i++){
        for(j=n;j>i;j--)
        cout<<" ";
        if(i==0)
            cout<<"*";
        if(i>0 && i<n/2){
            cout<<"*";
            for(j=0;j<x;j++)
                cout<<" ";
            cout<<"*";
            x+=2;
        }
        if(i==n/2){
            for(j=0;j<n;j++)
                cout<<"*";
        }
        if(i>n/2){
            cout<<"*";
            for(j=0;j<k;j++)
                cout<<" ";
            cout<<"*";
            k+=2;
        }
        cout<<endl;
    }
}
