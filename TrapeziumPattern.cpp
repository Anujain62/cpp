#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows:";
    cin>>n;
    int lnum=1,rnum=n*n+1;
    for(int i=n;i>0;i--){
        for(int j=n;j>i;j--)
            cout<<"  ";
        for(int j=0;j<i;j++){
            cout<<lnum<<" * ";
            lnum++;
        }
        for(int j=0;j<i;j++){
            cout<<rnum;
            if(j<i-1)
                cout<<" * ";
            rnum++;
        }
        rnum=rnum-(i-1)*2-1;
        cout<<endl;
    }
}
