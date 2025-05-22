#include<iostream>
using namespace std;


/**   1/2 + 2/3 + 3/4 + .........+ n/n+1     **/
/*int main(){
    double n,sum=0;
    cin>>n;
    for(double i=1;i<=n;i++){
        double div=i/(i+1);
        sum+=div;
    }
    cout<<"sum = "<<sum;
    return 0;
}*/

/** 1 + x + x^2 + x^3 + ....... + x^n   **/
/*int main(){
    int n,x,sum=0,m=1;
    cout<<"enter value of x ans n:";
    cin>>x>>n;
    for(int i=0;i<=n;i++){
        sum+=m;
        m*=x;
    }
    cout<<"sum = "<<sum;
    return 0;
}*/

/**  1 - x + x^2 - x^3 + x^4 ..........x^n    **/
/*int main(){
    int n,x,m=1,j=1,sum=0;
    cout<<"enter value of x and n:";
    cin>>x>>n;
    for(int i=0;i<=n;i++){
        if(j%2==0)
            sum-=m;
        else
            sum+=m;
        j++;
        m*=x;
    }
    cout<<"sum = "<<sum;
}*/

/**  1 + x + x^2/2 + x^3/3 + ........ + x^n/n        **/
/*int main(){
    int x,n,m=1,sum=0;
    cout<<"enter value of x and n:";
    cin>>x>>n;
    for(int i=0;i<=n;i++){
        if(i==0)
            sum+=m;
        else
           sum+=m/i;
        m*=x;
    }
    cout<<"sum = "<<sum;
}*/


/**    1 + x/1! + x^2/2! + x^3/3! + ...... + x^n/n!      **/
/*int main(){
    double n,x,fact,sum=0,m=1.0;
    cout<<"enter value of x and n:";
    cin>>x>>n;
    for(int i=0;i<=n;i++){
        if(i==0)
            sum+=m;
        else{
            fact=1;
            for(int j=1;j<=i;j++)
                fact*=j;
        }
        sum+=(m/fact);
        m*=x;
    }
    cout<<"sum = "<<sum;
}*/


/**  1 - x/1! + x^2/2! - x^3/3! + ...........+x^n/n!   **/
/*int main(){
    int x,n,m=1,sum=0;
    cout<<"enter value of x and n:";
    cin>>x>>n;
    for(int i=0;i<=n;i++){
        if(i==0)
            sum+=m;
        else
           sum+=m/i;
        m*=x;
    }
    cout<<"sum = "<<sum;
}*/


/**    1 + x/1! + x^2/2! + x^3/3! + ...... + x^n/n!      **/
/*int main(){
    double x,n,m=1.0,sum=0;
    int fact;
    cout<<"enter value of x and n:";
    cin>>x>>n;
    for(int i=0;i<=n;i++){
        if(i==0)
            sum+=m;
        else{
            fact=1;
            for(int j=1;j<=i;j++)
                fact*=j;
        }
        if(i%2==0)
            sum+=(m/fact);
        else
            sum-=(m/fact);
        m*=x;
    }
    cout<<"sum = "<<sum;
}*/

/** 1 + x/1! + x^3/3! + x^5/5! + ........    **/
/*int main(){
    double n,x,m,sum=1;
    cout<<"enter the value of x and n:";
    cin>>x>>n;
    m=x;
    for(int i=1;i<=2*n-1;i+=2){
        int fact=1;
        for(int j=1;j<=i;j++)
            fact*=j;
        sum+=(m/fact);
        m*=x*x;
    }
    cout<<"sum = "<<sum;
}*/


/**  1 + x^2/2! + x^4/4! + x^6/6! +........   **/
/*int main(){
    double n,x,sum=0,m=1;
    int fact;
    cout<<"enter value of x and n:";
    cin>>x>>n;
    for(int i=0;i<=2*n;i+=2){
        if(i==0)
            sum+=m;
        else{
            fact=1;
            for(int j=1;j<=i;j++)
                fact*=j;
            sum+=(m/fact);
        }
        m*=x*x;
    }
    cout<<"sum = "<<sum;
}*/


/** 1!/1^2 + 3!/2^4 + 5!/3^8 + ...... **/
int main(){
    double n,i,j=1.0,k=2.0,power,fact,sum=0;
    cin>>n;
    for(i=1;i<=2*n-1;i+=2){
        power=fact=1;
        for(int s=1;s<=k;s++)
            power*=j;
        for(int s=1;s<=i;s++)
            fact*=s;
        j++;
        k*=2;
        sum+=(fact/power);
    }
    cout<<"sum ="<<sum;
}














