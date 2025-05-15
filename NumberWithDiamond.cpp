#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows:";
    cin>>n;
    int spc=n/2,k=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<spc;j++)
            cout<<" ";
        if(i==0 || i==n-1)
            cout<<"1";
        else{
            for(int j=k;j>=1;j--)
                cout<<j;
            for(int j=2;j<=k;j++)
                cout<<j;
        }
        if(i<n/2){
            spc--;
            k++;
        }
        else{
            spc++;
            k--;
        }
        cout<<endl;
    }
}
