/** given an integer n , for every positive integer i<=n,the task is to print
"FizzBuzz" if i is divisible by 3 & 5
"Fizz" if i is divisible by 3
"Buzz" if i is divisible by 5 **/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%3==0 && i%5==0)
            cout<<"FizzBuzz"<<" ";
        else if(i%3==0)
            cout<<"Fizz"<<" ";
        else if(i%5==0)
            cout<<"Buzz"<<" ";
        else
            cout<<i<<" ";
    }
}
