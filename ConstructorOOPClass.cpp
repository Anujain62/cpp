//c++ provides us a default constructor on its on in every class,still why some time it is
//required to create a default constructor manually.
#include<iostream>
using namespace std;

class demo{
public:
    /**1**/
    /*int x;
    demo(){}
    demo (int val){
        x=val;
    }*/
    int x;
    int *p;
public:
    demo(){
        p=new int;          //*p = derefencing operator
    }
    void setdata(int m,int n){
        x=m;
        *p=n;
    }
    void dispay(){
        cout<<"x="<<x<<" | ";
        cout<<"*p="<<*p<<endl;
    }
};
int main(){
    demo d1;
    d1.setdata(5,10);
    d1.dispay();

    /**1**/
    /*demo d1;   //default
    demo d2(5);   //parameterized
    //d1.x=5;
    cout<<d1.x;*/
   return 0;
}
