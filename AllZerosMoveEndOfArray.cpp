#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter element of array:";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int i=0,j=n-1;
    while(i<j){
        if(arr[i]==0){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
        else
        i++;
    }
    cout<<"shorted array is :";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
