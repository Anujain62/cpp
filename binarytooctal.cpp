#include<iostream>
#include<iomanip>
using namespace std;
int main(){


    /**conversion binary to octal and hexadecimal**/
     cout<<setw(3)<<"dec"<<setw(8)<<"oct"<<setw(8)<<"hex"<<endl;
     for(int i=0;i<=100;i++){
        cout<<setw(3)<<setbase(10)<<i<<setw(8)<<setbase(8)<<i<<setw(8)<<setbase(16)<<i<<endl;
     }



   // int a=10;
    //cout<<setbase(8)<<a;
   return 0;
}
