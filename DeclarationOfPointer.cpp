/** Pointer - value at operator
     we can used maximum asterisks for a variable -
     number of asterisks at the time of its declaration.

**/

#include<iostream>
using namespace std;
int main(){
    int a,*p,**q,***r,****s,*****t;
    a=20;
    p=&a;
    q=&p;
    r=&q;
    s=&r;
    t=&s;
    cout<<"a = "<<a<<endl;
    cout<<"p = "<<p<<endl;
    cout<<"q = "<<q<<endl;
    cout<<"r = "<<r<<endl;
    cout<<"s = "<<s<<endl;
    cout<<"t = "<<t<<endl;
    return 0;
}
