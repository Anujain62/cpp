#include<iostream>
#include<vector>
using namespace std;

/*int main(){
    int n;
    cout<<"enter size of array:"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter element of array:"<<endl;
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    int target;
    cout<<"enter target element:"<<endl;
    cin>>target;

    /**second method**/
    //infinite loop??
   /* int i=0,j=n-1;
    while(i<j){
        int pairsum=a[i]+a[j];
       if(pairsum>target){
          j--;
       }
       else if(pairsum<target){
          i++;
       }
       else if(pairsum==target){
        cout<<a[i]<<"+"<<a[j]<<"="<<target<<endl;
       }
    }*/
    //cout<<a[i]<<"+"<<a[j]<<"="<<target<<endl;

    /**first method**/
    /*for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==target){
                cout<<a[i]<<" + "<<a[j]<<" = "<<target<<endl;
            }
        }
    }
 return 0;
}*/


vector<int>pairsum(vector<int>nums,int target){
     vector<int>ans;
     int n=nums.size();
     int i=0,j=n-1;
     /**first method**/
     while(i<j){
        int pairsum=nums[i]+nums[j];
        if(pairsum>target){
            j--;
        }else if(pairsum<target){
           i++;
        }else{
           ans.push_back(i);
           ans.push_back(j);
           return ans;
        }
     }

      /**second method**/
    /* for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
            ans.push_back(i);
            ans.push_back(j);
            return ans;
            }
        }
     }*/
     return ans;
}
int main(){
   vector<int>nums={2,7,11,15};
   int target=13;
   vector<int>ans = pairsum(nums,target);
   cout<<"ans"<<" "<<ans<<endl;
  return 0;
}
