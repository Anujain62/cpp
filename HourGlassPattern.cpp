#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    int spc=0,num=1;
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<spc;j++)
            cout<<"  ";
        for(int j=num;j<=n;j++)
            cout<<j<<" ";
        if(i<n-1){
            spc++;
            num++;
        }
        else{
            spc--;
            num--;
        }
        cout<<endl;
    }
}
