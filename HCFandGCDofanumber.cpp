#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter first number:"<<endl;
    cin>>n;
    cout<<"enter second number:"<<endl;
    cin>>m;
    int LCM=0,HCF=0;
    int i,j;
    int maxi=m>n?m:n;
    /**for HCF**/
      for(i=maxi;i>=2;i--){
        if(n%i==0 && m%i==0){
                HCF=i;
                break;
        }
      }
      /**for LCM**/
    while(maxi%n!=0 || maxi%m!=0){
        maxi++;
    }
    LCM=maxi;
    /**for HCF**/
   /* int orgn=n;
    int orgm=m;
    while(n>0){
        int temp=n;
        n=n%m;
        m=temp;
    }
    HCF=m;
    n=orgn;
    m=orgm;*/
         cout<<n<<" and "<<m<<" number HCF is "<<HCF<<endl;
         cout<<n<<" and "<<m<<" number LCM is "<<LCM<<endl;
    return 0;
}
