#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter a number:";
    cin>>n;
    for(i=1;i<2*n;i++){
        for(j=1;j<2*n;j++){
            if(i==j || j+i == 10)
                cout<<"*";
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
