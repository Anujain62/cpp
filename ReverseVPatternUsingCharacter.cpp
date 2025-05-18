#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows:";
    cin>>n;
    int x=65+n-1,spc1=n-1,spc2=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<spc1;j++)
            cout<<" ";
        if(i==0)
            cout<<(char)(x);
        else{
            cout<<(char)(x);
            for(int j=0;j<spc2;j++)
                cout<<" ";
            cout<<(char)(x);
        }
        spc1--;
        spc2+=2;
        x--;
        cout<<endl;
    }
}
