/** Calculate the distance between two points**/
#include<iostream>
#include<math.h>
using namespace std;
double distance(double x1,double y1,double x2,double y2){
    double x=x2-x1;
    double y=y2-y1;
    double n=sqrt(x*x + y*y);
    return n;
}
int main(){
     double n1,n2,m1,m2;
     cout<<"enter n1 and m1:";
     cin>>n1>>m1;
     cout<<"enter n2 and m2:";
     cin>>n2>>m2;
     cout<<"distance between two points :"<<distance(n1,m1,n2,m2);
}
