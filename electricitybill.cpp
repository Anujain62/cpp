/**write a program that calculate the electricity bill based on the following tariff plan
  1) for the first 100 unit ,the rate is 3.36 rupee per unit
  2) for the next 200(101-300) units ,the rate is 7.34 rupees per unit
  3) for the next 200(301-500) units,the rate is 10.37 rupees per unit
  4) beyond 500 units,the rate is 11.86 rupees per unit**/

  #include<iostream>
  #include<iomanip>
  using namespace std;
  int main(){

    int units;
    double bill;
    cout<<"enter units:"<<endl;
    cin>>units;
    if(units<=100){
        bill=units*3.36;
       }else if(units<=300){
           bill=100*3.36+(units-100)*7.34;
    }else if(units<=500){
           bill=(100*3.36)+(200*7.34)+(units-300)*10.37;
    }else{
         bill=(100*3.36)+(200*7.34)+(200*10.37)+(units-200)*11.86;
    }
      cout<<bill<<endl;

    return 0;
  }
