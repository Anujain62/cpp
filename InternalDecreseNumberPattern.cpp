/**for only n<8**/
#include<iostream>
using namespace std;
int main(){
int n,i,j,h,k,x;
cin>>n;
for(i=1;i<=n;i++){
k=n/2+1;
if(i==1 || i==n){
for(j=1;j<=n;j++)
cout<<k;
}
else if(i==2 || i==n-1){
cout<<k;
k--;
for(j=2;j<n;j++)
cout<<k;
cout<<k+1;
}
else if(i==n/2+1){
for(j=1;j<=n/2+1;j++){
cout<<k;
k--;
}
k=2;
for(j=n/2+2;j<=n;j++){
cout<<k;
k++;
}
}
else if(i==n/2 || i==n/2+2){
for(j=1;j<n/2;j++){
cout<<k;
k--;
}
for(j=n/2;j<=n/2+1;j++)
cout<<k;
for(j=n/2+2;j<=n;j++){
cout<<k;
k++;
}
}
cout<<endl;
}
}
