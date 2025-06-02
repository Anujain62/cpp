#include<iostream>
using namespace std;
int main(){
    int n,m=0;
    cin>>n;
    int org=n;
    int count=0;
    while(n>0){
        int rem=n%10;
        m=m*10+rem;
        n=n/10;
        count++;
    }
   // cout<<"total digits"<<count;
    if(count%2==0){
            int k=count;
            while(k>(count/2)){
            int rem1=org%10;
            int rem2=m%10;
            cout<<"\nlast digit:"<<rem1;
            cout<<"\nstart digit:"<<rem2;
            org/=10;
            m/=10;
            k--;
            int z1=rem1*10+rem2;
            cout<<"\nnumber:"<<z1;
        }
    }

    return 0;
}
