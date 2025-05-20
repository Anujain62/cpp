#include<iostream>
using namespace std;

/**        *****
            ****
             ***
              **
               *
  **/
/*int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--)
            cout<<"*";
        for(int j=0;j<i;j++)
            cout<<" ";
        cout<<endl;
    }
    return 0;
}*/

/**        *
          **
         ***
        ****
       *****
 **/
 /*int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++)
            cout<<" ";
        for(int j=0;j<=i;j++)
            cout<<"*";
        cout<<endl;
    }
 }*/

/**        *****
           ****
           ***
           **
           *
  **/
/*int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--)
            cout<<"*";
        cout<<endl;
    }
 }*/

/**       *
          **
          ***
          ****
          *****
 **/

/*int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++)
            cout<<"*";
        cout<<endl;
    }
}*/

/**       *****
          *****
          *****
          *****
          *****
**/

/*int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<"*";
        cout<<endl;
    }
}*/


/**   * ***
      * *
      *****
        * *
      *** *
**/

/*int main(){
    int n,j;
    cout<<"enter number of rows:";
    cin>>n;
    for(int i=0;i<n;i++){
        if(i==0){
            j=1;
            cout<<"* ";
            while(j<n/2){
                cout<<"  ";
                j++;
            }
            for(int x=j;x<n;x++)
                cout<<"* ";
        }
        else if(i<n/2){
            j=1;
            cout<<"* ";
            while(j<n/2){
                cout<<"  ";
                j++;
            }
            cout<<"* ";
            j++;
            while(j<n){
                cout<<"  ";
                j++;
            }
        }
        else if(i==n/2){
            for(int j=0;j<n;j++)
                cout<<"* ";
        }
        else if(i>n/2 && i<n-1){
            j=0;
            while(j<n/2){
                cout<<"  ";
                j++;
            }
            cout<<"* ";
            j++;
            while(j<n-1){
                cout<<"  ";
                j++;
            }
            cout<<"* ";
        }
        else if(i==n-1){
            j=0;
            while(j<=n/2){
                cout<<"* ";
                j++;
            }
            while(j<n-1){
                cout<<"  ";
                j++;
            }
            cout<<"* ";
        }
        cout<<endl;
    }
}*/

/**          *
            * *
           * * *
          *     *
         *       *
**/

int main(){
    int n,x=1,j,k;
    cout<<"enter number of rows:";
    cin>>n;
    k=n;
    for(int i=0;i<n;i++){
        for(j=n;j>i;j--)
        cout<<" ";
        if(i==0)
            cout<<"*";
        if(i>0 && i<n/2){
            cout<<"*";
            for(j=0;j<x;j++)
                cout<<" ";
            cout<<"*";
            x+=2;
        }
        if(i==n/2){
            for(j=0;j<n;j++)
                cout<<"*";
        }
        if(i>n/2){
            cout<<"*";
            for(j=0;j<k;j++)
                cout<<" ";
            cout<<"*";
            k+=2;
        }
        cout<<endl;
    }
}


















