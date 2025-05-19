#include<iostream>
using namespace std;
int main(){
      int n;
      cout<<"enter even number of rows:";
      cin>>n;


      /**     **
              **
              ****
              ****
              ******
              ******
       **/

      /* int k=0;
       for(int i=0;i<n;i++){
            if(i%2==0)
                k+=2;
          for(int j=0;j<k;j++)
             cout<<"* ";
          cout<<endl;
       } */





       /**              **
                        **
                       ****
                       ****
                      ******
                      ******
       **/

       /*int x=0,y=n/2;
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
       }*/




       /**          ******
                    ******
                    ****
                    ****
                    **
                    **
           **/

        /*int k=n;
        for(int i=0;i<n;i++){
            for(int j=0;j<k;j++)
                cout<<"* ";
            if((i+1)%2==0)
                k-=2;
            cout<<endl;
        }*/


        /**        ******
                   ******
                    ****
                    ****
                     **
                     **
            **/

        int x=0,y=n;
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

























}
