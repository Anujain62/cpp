#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main(){
    int n,m,rem;
    char x;
    vector<char>ans;
    cin>>n;
    m=n;
    while(n>0){
        rem=n%16;                          //reverse(v.begin(), v.end());

        if(rem<10)
            x=char(48+rem);
        else
            x=char(55+rem);
        ans.push_back(x);
    }
    reverse(ans.begin() , ans.end());
    for(char val:ans)
        cout<<val;
    return 0;
}
