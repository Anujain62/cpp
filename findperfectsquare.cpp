#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:"<<endl;
    cin>>n;
    int num=sqrt(n);
    if((num*num)==n)
        cout<<n<<" number is perfect square";
    else
        cout<<n<<" number is not perfect square";
    return 0;
}
