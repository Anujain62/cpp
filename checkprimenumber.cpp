#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:"<<endl;
    cin>>n;
    int total=2;
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count > total)
        cout<<n<<" number is not prime number";
    else
        cout<<n<<" number is prime number";
    return 0;
}
