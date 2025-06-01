#include<iostream>
using namespace std;
int main(){
    int n,esum=0,osum=0,x,count=1;
    cout<<"enter a number:";
    cin>>n;
    while(n>0){
        x=n%10;
        if(count%2==0)
            osum+=x;
        else
            esum+=x;
        count++;
        n/=10;
    }
    if(osum>esum)
        cout<<"sum of odd places "<<osum<<" is greater than even places sum"<<esum;
    else
        cout<<"sum of even places "<<esum<<" is greater than odd places sum"<<osum;
    return 0;
}
