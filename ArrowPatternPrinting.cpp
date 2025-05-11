#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    int spc=0,str=1;
    for(int i=0;i<2*n-1;i++){
        if(i<n-1){
            for(int j=0;j<spc;j++)
                cout<<" ";
            for(int j=0;j<str;j++)
                cout<<"*";
            str++;
            spc++;
        }
        else if(i>=n-1){
            for(int j=0;j<spc;j++)
                cout<<" ";
            for(int j=0;j<str;j++)
                cout<<"*";
            str--;
            spc--;
        }
        else{
            for(int j=0;j<spc;j++)
                cout<<" ";
            for(int j=0;j<str;j++)
                cout<<"*";
        }
        cout<<endl;
    }
}
