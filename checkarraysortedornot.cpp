/**check array is sorted or not**/
#include<iostream>
using namespace std;

bool issorted(int arr[],int size){
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1])
            return false;
    }
    return true;
}

int main(){
    int size;
    int maxi,smaxi,mini,smini;
    cout<<"enter the size of array:";
    cin>>size;
    int arr[size];
    int i;
    cout<<"enter the element of array:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int m=issorted(arr,size);
    if(m==1)
        cout<<m;
    else
        cout<<m;

  /* bool result=true;
    for(i=1;i<size-1;i++){
        if(arr[i]>arr[i+1]){
        result=false;
           break;
        }
    }
    if(result)
       cout<<"array is sorted"<<endl;
     else
        cout<<"array is not sorted";*/
  return 0;
}
