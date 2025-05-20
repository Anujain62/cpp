/** Determine if a number is a palindrome or not **/
#include<iostream>
using namespace std;
int main(){
    int n,m,rem,ans=0;
    cout<<"enter a number:";
    cin>>n;
    m=n;
    while(n>0){
        rem=n%10;
        ans = ans*10+rem;
        n/=10;
    }
    if(ans==m)
        cout<<"number "<<m<<" is palindrome";
    else
        cout<<"number "<<m<<" is not palindrome";
}
