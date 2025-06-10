#include<iostream>
using namespace std;
int main(){
    int n,sum=0,median;
    double mean;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter the element of array:";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
        sum+=arr[i];
    mean=sum/n;
    for(int i=0;i<n;i++){
        for(int j=1+i;j<n;j++){
            if(arr[i]>arr[j]){
                int temp =arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    if(n%2==0){
        median=(arr[n/2]+arr[(n/2)-1])/2;
    }
    else
        median=arr[n/2];
    cout<<"mean = "<<mean<<endl<<"median ="<<median;
}
