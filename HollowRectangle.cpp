#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter number of rows & coloums:";
    cin>>n>>m;
    for(int i=0;i<n;i++){
        if(i==0 || i==n-1){
            for(int j=0;j<m;j++)
                cout<<"* ";
        }
        else{
            cout<<"* ";
            for(int j=0;j<m-2;j++)
                cout<<"  ";
            cout<<"* ";
        }
        cout<<endl;
    }
}

