#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows:";
    cin>>n;
    int x=65,spc=-1,m=n-2;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=n-i;j++)
            cout<<(char)(x+j)<<" ";
        for(int j=0;j<spc;j++)
            cout<<"  ";
        for(int j=m;j>=0;j--)
                cout<<(char)(x+j)<<" ";
        spc+=2;
        if(i!=1)
            m--;
        cout<<endl;
    }
}
