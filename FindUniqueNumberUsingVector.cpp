#include<iostream>
#include<vector>
using namespace std;
int SingleNumber(vector<int> &nums){
    int ans=0;
    for(int val:nums){
        ans=ans^val;
    }
    return ans;
}

int main(){
    vector<int>vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    cout<<"unique number is:"<<SingleNumber(vec);
    return 0;
}
