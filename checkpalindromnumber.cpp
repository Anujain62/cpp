/**check the number is palindrome**/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:"<<endl;
    cin>>n;
    int rev=0,org=n;
    while(n>0){
        rev = rev*10 + n%10;
        n/=10;
    }
    if(rev==org)
        cout<<org <<" number is palindrome"<<endl;
    else
        cout<<org <<" number is not palindrome"<<endl;
   return 0;
}
