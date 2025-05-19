#include<iostream>
using namespace std;
int main(){
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
}
