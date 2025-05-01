#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter number of rows:";
    cin>>n;
    cout<<"Enter number of coloums:";
    cin>>m;
    int a[n][m];
    int b[m][n];
    cout<<"Enter elements for first matrix:";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter elements for second matrix:";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>b[i][j];
        }
    }
    int c[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
                c[i][j]=0;
            for(int k=0;k<n;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    system("cls");
    cout<<"First Matrix is:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j];
            if(j<m-1)
                cout<<" | ";
        }
        cout<<endl;
        if(i<n-1){
            for(int j=0;j<n;j++)
            cout<<"---";
        }
        cout<<endl;
    }
    cout<<"Second Matrix is:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<b[i][j];
            if(j<m-1)
                cout<<" | ";
        }
        cout<<endl;
        if(i<n-1){
            for(int j=0;j<n;j++)
            cout<<"---";
        }
        cout<<endl;
    }
    cout<<"Final Matrix is:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<c[i][j];
            if(j<m-1)
                cout<<" | ";
        }
        cout<<endl;
         if(i<n-1){
                for(int j=0;j<n;j++)
                    cout<<"-----";
            }
        cout<<endl;
    }
}
