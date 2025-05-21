/** WAP to accept any number and print in vertically **/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    while(n>0){
        int rem =n%10;
        cout<<rem<<endl;
        n/=10;
    }
    return 0;
}
