#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows:";
    cin>>n;
    int k=1,spc=n/2;
    for(int i=0;i<n;i++){
        for(int j=0;j<spc;j++)
            cout<<" ";
        int x=1;
        for(int j=0;j<k;j++){
            cout<<x;
            if(j<k-1)
                cout<<"*";
            x++;
        }
        if(i<n/2){
            spc--;
            k++;
        }
        else{
            spc++;
            k--;
        }
        cout<<endl;
    }
}
