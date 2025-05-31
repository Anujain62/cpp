#include<iostream>
using namespace std;
class time{
      int hor,mint,sec;
  public:
    void settime(int ,int ,int);
    void showtime();
    void normalizetime();
};
void time::settime(int x,int y,int z){
      hor=x;
      mint=y;
      sec=z;
}
void time::showtime(){
      cout<<hor<<":"<<mint<<":"<<sec<<endl;
}
void time::normalizetime(){
    mint+=sec/60;
    sec%=60;
    hor+=mint/60;
    mint%=60;
}
int main(){
    int l,m,n;
    cout<<"enter time same as hour,mint,sec:";
    cin>>l>>m>>n;
    time t;
    t.settime(l,m,n);
    t.showtime();
    t.normalizetime();
    t.showtime();
    return 0;
}
