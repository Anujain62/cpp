#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter year:";
    cin>>year;
    if(year%4==0)
        cout<<"year "<<year<<" is leap year"<<endl;
    else if(year%100!=0)
        cout<<"year "<<year<<" is not leap year"<<endl;
    else if(year%400==0)
        cout<<"year "<<year<<" is leap year"<<endl;
    return 0;
}
