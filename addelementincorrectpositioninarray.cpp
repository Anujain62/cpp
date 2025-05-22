/**insert an element in the correct position on sorted array**/
#include<iostream>
using namespace std;
int main(){
    int size,n;
    cout<<"enter the size of array:";
    cin>>size;
    int arr[size+1];
    cout<<"enter the element of array:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"enter insert element:"<<endl;
    cin>>n;
    cout<<"before insert array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    int ans;
    for(int i=0;i<size;i++){
        if(arr[i]<=n && arr[i+1]>=n){
             ans=i;
        }
    }
    cout << "ans=" << ans << endl;
    int j=size;
    while(j>=ans+1){
        arr[j]=arr[j-1];
        j--;
    }
    arr[ans+1]=n;
    cout<<endl;
    cout<<"after insert array"<<endl;
    size++;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
