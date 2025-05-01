/** 2+22+222+2222+.......**/
/*#include<iostream>
using namespace std;
int main(){
    int n,sum=0,a=2;
    cout<<"enter a number:";
    cin>>n;
    while(n>0){
        sum+=a;
        a=a*10+2;
        n--;
    }
    cout<<"sum = "<<sum;
}*/


/** 1^2+3^2+5^2+...............+(2*n-1)^2 **/
/*#include<iostream>
using namespace std;
int main(){
    int n,sum=0,a=2;
    cout<<"enter a number:";
    cin>>n;
    for(int i=1;i<=2*n-1;i+=2){
        sum+=i*i;
    }
    cout<<"sum = "<<sum;
}*/


/** 0.6+0.06+0.006+.....**/
/*#include<iostream>
using namespace std;
int main(){
    int n,power=1;
    double sum=0;
    cout<<"enter a number:";
    cin>>n;
    while(n>0){
        power*=10;
        sum+=(6.0/power);
        n--;
    }
    cout<<"sum = "<<sum;
}*/


/** 2,12,36,80,150,....**/
#include<iostream>
using namespace std;
int main(){
    int n,sum=0,power1=1,power2=1;
    cout<<"enter a number:";
    cin>>n;
    for(int i=1;i<=2;i++){
        power1*=n;
        power2*=n;
    }
    power2*=n;
    sum+=power1+power2;
    cout<<"sum = "<<sum;
}


















