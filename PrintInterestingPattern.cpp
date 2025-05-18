#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    int str=n+1,spc=0;
    for(int i=0;i<2*n;i++){
            if(i<n){
                str--;
                spc+=2;
            }
            else if(i>n){
                str++;
                spc-=2;
            }
            for(int j=0;j<str;j++)
              cout<<"*";
            for(int j=0;j<spc;j++)
                cout<<" ";
            for(int j=0;j<str;j++)
                cout<<"*";
            cout<<endl;
    }
}
