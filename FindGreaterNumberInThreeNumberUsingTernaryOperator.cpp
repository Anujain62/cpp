#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter a,b,c"<<endl;
    cin>>a>>b>>c;
    /*if(a>b){
        if(a>c)
            cout<<a<<" is greater";
        else
            cout<<c<<" is greater";
    }else{
        if(b>c)
            cout<<b<<" is greater";
        else
            cout<<c<<" is greater";
    }*/
    int maximum;
    maximum=a>b?a>c?a:c:b>c?b:c;
    cout<<maximum<<" is greater";
   return 0;
}
