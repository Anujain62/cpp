#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter a number:";
    cin>>n;

    /*for(i=1;i<=n;i++){
        for(j=1;j<=2*n;j++){
            if(j<=i || j>=((2*n+1)-i))
                cout<<"* ";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=2*n;j++){
            if(j<=n+1-i || j>=n+i)
                cout<<"* ";
            else
                cout<<" ";
        }
        cout<<endl;
    }*/

    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++)
            cout<<"*";
        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
            cout<<"*";
        cout<<endl;
    }
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        for(j=1;j<=2*(n-i);j++)
            cout<<" ";
        for(j=1;j<=i;j++)
            cout<<"*";
        cout<<endl;
    }
}
