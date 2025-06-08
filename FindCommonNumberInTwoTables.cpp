#include<iostream>
using namespace std;
int main(){
    int n,m,count=0;
    cin>>n>>m;
    for(int i=1;i<=10;i++){
        int x=n*i;
        for(int j=1;j<=10;j++){
            if(x==(m*j)){
                count++;
                cout<<x<<endl;
            }
        }
    }
    cout<<"\ntotal common numbers:"<<count;
    return 0;
}
