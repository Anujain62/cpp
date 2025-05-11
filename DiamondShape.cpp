#include<iostream>
using namespace std;
int main(){
    int n,k=0,x;
    cout<<"enter a number:";
    cin>>n;
    x=n;
    for(int i=0;i<2*n-1;i++){
        if(i>=n)
            x++;
        else
            x--;
        for(int j=0;j<x;j++)
            cout<<" ";
        if(i<n)
            k++;
        else
            k--;
        for(int j=0;j<k;j++)
            cout<<"* ";
        cout<<endl;
    }
}
