#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows:";
    cin>>n;
    for(int i=0;i<n;i++){
        int x=65;
        for(int j=i;j<n;j++){
            cout<<(char)(x+j)<<" ";
        }
        cout<<endl;
    }
}
