#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    int k=1,spc=n-1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<spc;j++)
            cout<<" ";
        for(int j=i;j<=k;j++)
            cout<<j;
        for(int j=k-1;j>=i;j--)
            cout<<j;
        k+=2;
        spc--;
        cout<<endl;
    }
}
