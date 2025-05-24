#include<iostream>
using namespace std;
int main(){

    int t[]={8,4,3,2,1},i;
    for(i=t[4];i<t[0];i++)
        t[i-1]=-t[3];
    cout<<i;


  /*int a=1,b=2;
  int c=a<<b;
  int d=1<<c;
  int e=d>>d;
  cout<<e;*/
 return 0;
 }
