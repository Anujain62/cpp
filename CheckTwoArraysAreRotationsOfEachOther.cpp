#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr1[n],arr2[n];
    cout<<"\nenter element of first array:";
    for(int i=0;i<n;i++)
        cin>>arr1[i];
    cout<<"\nenter element of second array:";
    for(int i=0;i<n;i++)
        cin>>arr2[i];
    int i=0,j=n-1;
    while(i<n && j>=0){
        if(arr1[i]!=arr2[i])
            break;
        i++;
        j--;
    }
    if(i==n && j==-1)
         cout<<"both arrays are rotations of each other";
    else
        cout<<"both arrays are not rotations of each other";
    return 0;
}
