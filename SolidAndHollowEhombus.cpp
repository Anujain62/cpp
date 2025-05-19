#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows:";
    cin>>n;
    int x=n-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<x;j++)
            cout<<"  ";
        for(int j=0;j<n;j++)
            cout<<"* ";
        cout<<endl;
        x--;
    }
    cout<<endl<<endl;
    x=n-1;
     for(int i=0;i<n;i++){
        for(int j=0;j<x;j++)
            cout<<"  ";
        if(i==0 || i==n-1){
            for(int j=0;j<n;j++)
                cout<<"* ";
        }
        else{
            cout<<"* ";
            for(int j=0;j<n-2;j++)
            cout<<"  ";
            cout<<"* ";
        }
        cout<<endl;
        x--;
    }
}
