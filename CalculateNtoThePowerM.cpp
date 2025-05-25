#include<iostream>
using namespace std;
int main(){
    int n,m,power=1;
    cout<<"enter two numbers:";
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        power*=n;
    }
    cout<<n<<" to the power "<<m<<" is "<<power;
    return 0;
}
