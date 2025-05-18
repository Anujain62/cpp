#include<iostream>
using namespace std;
int main(){
    int n,j;
    cout<<"enter number of rows:";
    cin>>n;
    int k=1;
    for(int i=0;i<n;i++){
        if(i==0){
            cout<<k;
            k++;
        }
        else if(i%2==0){
            for(j=0;j<i;j++){
                cout<<k<<"*";
                k++;
            }
            cout<<k;
            k++;
        }
        else{
            int x=k;
            for(j=x+i;j>x;j--){
                cout<<j<<"*";
                k++;
            }
            cout<<j;
            k++;
        }
        cout<<endl;
    }
}
