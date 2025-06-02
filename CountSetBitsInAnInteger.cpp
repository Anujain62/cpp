/** write an efficient program to count the number of 1s in the binary representation of an integer**/
#include<iostream>
using namespace std;
int main(){
    int n,j=1,rem,s=0;
    cout<<"enter a number:";
    cin>>n;
    while(n>0){
        rem=n%2;
        if(rem==1)
            s++;
        n/=2;
    }
    cout<<"total 1's in binary number is :"<<s;
}
