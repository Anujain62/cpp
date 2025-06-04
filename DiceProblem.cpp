/** input a number by user and find its opposite side number **/

#include<iostream>
using namespace std;
int Dice(int x){
    if(x==1)
        cout<<"6";
    else if(x==2)
        cout<<"5";
    else if(x==3)
        cout<<"4";
    else if(x==4)
        cout<<"3";
    else if(x==5)
        cout<<"2";
    else
        cout<<"1";
}
int main(){
    int n;
    cout<<"enter your number:";
    cin>>n;
    Dice(n);
    return 0;

}
