#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,spc,k,x,j,str,y,m;
    cout<<"enter a number:";
    cin>>n;
    cout<<"Number with Diamond:"<<endl<<endl;
    if(n%2==0)
        m=n-1;
    else
        m=n;
    spc=n/2,k=1;
    for(int i=0;i<m;i++){
        for(int j=0;j<spc;j++)
            cout<<" ";
        if(i==0 || i==m-1)
            cout<<"1";
        else{
            for(int j=k;j>=1;j--)
                cout<<j;
            for(int j=2;j<=k;j++)
                cout<<j;
        }
        if(i<m/2){
            spc--;
            k++;
        }
        else{
            spc++;
            k--;
        }
        cout<<endl;
    }


    cout<<endl<<endl;
    cout<<"Number Of Stars:"<<endl<<endl;
    if(n%2==0)
        m=n-1;
    else
        m=n;
    k=1,spc=n/2;
    for(int i=0;i<m;i++){
        for(int j=0;j<spc;j++)
            cout<<" ";
        x=1;
        for(int j=0;j<k;j++){
            cout<<x;
            if(j<k-1)
                cout<<"*";
            x++;
        }
        if(i<m/2){
            spc--;
            k++;
        }
        else{
            spc++;
            k--;
        }
        cout<<endl;
    }


    cout<<endl<<endl;
    cout<<"Trapezium Pattern:"<<endl<<endl;
    int lnum=1,rnum=n*n+1;
    for(int i=n;i>0;i--){
        for(int j=n;j>i;j--)
            cout<<"  ";
        for(int j=0;j<i;j++){
            cout<<lnum<<" * ";
            lnum++;
        }
        for(int j=0;j<i;j++){
            cout<<rnum;
            if(j<i-1)
                cout<<" * ";
            rnum++;
        }
        rnum=rnum-(i-1)*2-1;
        cout<<endl;
    }
    cout<<endl<<endl;
    cout<<"Reverse V Pattern :"<<endl<<endl;
    x=65+n-1;
    int spc1=n-1,spc2=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<spc1;j++)
            cout<<" ";
        if(i==0)
            cout<<(char)(x);
        else{
            cout<<(char)(x);
            for(int j=0;j<spc2;j++)
                cout<<" ";
            cout<<(char)(x);
        }
        spc1--;
        spc2+=2;
        x--;
        cout<<endl;
    }
    cout<<endl<<endl;
    cout<<"Arrow Pattern:"<<endl<<endl;
   spc=0,str=1;
    for(int i=0;i<2*n-1;i++){
        if(i<n-1){
            for(int j=0;j<spc;j++)
                cout<<" ";
            for(int j=0;j<str;j++)
                cout<<"*";
            str++;
            spc++;
        }
        else if(i>=n-1){
            for(int j=0;j<spc;j++)
                cout<<" ";
            for(int j=0;j<str;j++)
                cout<<"*";
            str--;
            spc--;
        }
        else{
            for(int j=0;j<spc;j++)
                cout<<" ";
            for(int j=0;j<str;j++)
                cout<<"*";
        }
        cout<<endl;
    }
   cout<<endl<<endl;
   cout<<"Butterfly :"<<endl<<endl;
   spc=2*n-1,str=0;
    for(int i=0;i<2*n-1;i++){
       if(i<n){
         str++;
         spc-=2;
       }
       else{
        str--;
        spc+=2;
       }
        if(i==n-1){
            for(int j=0;j<2*n-1;j++)
                cout<<"* ";
        }
       else{
         for(int j=0;j<str;j++)
        cout<<"* ";
        for(int j=0;j<spc;j++)
        cout<<"  ";
        for(int j=0;j<str;j++)
        cout<<"* ";
       }
      cout<<endl;
    }
    cout<<endl<<endl;
    cout<<"Solid and Hollow Rhombus:"<<endl<<endl;
    x=n-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<x;j++)
            cout<<"  ";
        for(int j=0;j<n;j++)
            cout<<"* ";
        cout<<endl;
        x--;
    }
    cout<<endl<<endl;
    x=n-1;
     for(int i=0;i<n;i++){
        for(int j=0;j<x;j++)
            cout<<"  ";
        if(i==0 || i==n-1){
            for(int j=0;j<n;j++)
                cout<<"* ";
        }
        else{
            cout<<"* ";
            for(int j=0;j<n-2;j++)
            cout<<"  ";
            cout<<"* ";
        }
        cout<<endl;
        x--;
    }
    cout<<endl<<endl;
    cout<<"Diagonal Star Pattern:"<<endl<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0 || i==n-1 || j==n-1 || i==j || i+j==n-1)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    cout<<"Circle Pattern:"<<endl<<endl;
    float z;
    for(int i=0;i<=2*n;i++){
        for(int j=0;j<=2*n;j++){
            z=sqrt((i-n)*(i-n)+(j-n)*(j-n));
            if(z>n-0.5 && z<n+0.5)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    cout<<"Triangular Pattern of Alphabets:"<<endl<<endl;
    for(int i=0;i<n;i++){
        int x=65;
        for(int j=i;j<n;j++){
            cout<<(char)(x+j)<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    cout<<"Stair Case Pattern 1:"<<endl<<endl;
    k=0;
       for(int i=0;i<n;i++){
            if(i%2==0)
                k+=2;
          for(int j=0;j<k;j++)
             cout<<"* ";
          cout<<endl;
       }
     cout<<endl;
    cout<<"Stair Case Pattern 2:"<<endl<<endl;
    x=0,y=n/2;
       for(int i=0;i<n;i++){
            if(i%2==0){
                x+=2;
                y--;
            }
           for(int j=0;j<y;j++)
             cout<<"  ";
            for(int j=0;j<x;j++)
                cout<<"* ";
            cout<<endl;
       }
        cout<<endl;
    cout<<"Stair Case Pattern 3:"<<endl<<endl;
         k=n;
        for(int i=0;i<n;i++){
            for(int j=0;j<k;j++)
                cout<<"* ";
            if((i+1)%2==0)
                k-=2;
            cout<<endl;
        }
     cout<<endl;
    cout<<"Stair Case Pattern 4:"<<endl<<endl;
    x=0,y=n;
        for(int i=0;i<n;i++){
            for(int j=0;j<x;j++)
                cout<<"  ";
            for(int j=0;j<y;j++)
                cout<<"* ";
            if((i+1)%2==0){
                x++;
                y-=2;
            }
            cout<<endl;
        }
    cout<<endl<<endl;
    cout<<"Diamond Shape :"<<endl<<endl;
    x=n;
    for(int i=0;i<2*n-1;i++){
        if(i>=n)
            x++;
        else
            x--;
        for(int j=0;j<x;j++)
            cout<<" ";
        if(i<n)
            k++;
        else
            k--;
        for(int j=0;j<k;j++)
            cout<<"* ";
        cout<<endl;
    }
    cout<<endl<<endl;
    cout<<"Half Diamond :"<<endl<<endl;
    for(int i=0;i<2*n-1;i++){
        if(i<n)
            k++;
        else
            k--;
        for(int j=0;j<k;j++)
            cout<<"*";
        cout<<endl;
    }

}
