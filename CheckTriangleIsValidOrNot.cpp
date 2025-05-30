#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter value of three sides:";
    cin>>a>>b>>c;
    if(a+b>c && b+c>a && a+c>b)
        cout<<"valid triangle";
    else
        cout<<"invalid triangle";
    return 0;
}
