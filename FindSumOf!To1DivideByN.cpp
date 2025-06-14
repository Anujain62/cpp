/**   1 + 1/2 + 1/3 + 1/4 +.......+1/n    **/
#include<iostream>
using namespace std;
int main(){
    float n,sum=0;
    cout<<"enter a number:";
    cin>>n;
    for(int i=1;i<=n;i++)
        sum= sum + 1.0/i;
    cout<<"sum = "<<sum;
    return 0;
}
