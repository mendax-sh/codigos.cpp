#include<iostream>
using namespace std;
int main () {
    float x,z,y;
    cout<<"\n digite a priemira nota ";
    cin>>x;
    cout<<"\n digite a segunda nota ";
    cin>>y;

      z=x+y;

    if(z>=9&&z<=10){
          cout<<"\n O conceito bimestral e A sua nota "<<z;
       }else{
    if(z>=7.5&&z<=8.9){
          cout<<"\n O conceito bimestral e B sua nota "<<z;
       }else{
    if(z>=6.0&&z<=7.4){
          cout<<"\n O conceito bimestral e C sua nota "<<z;
       }else{
    if(z>=4.0&&z<=5.9){
          cout<<"\n O conceito bimestral e D sua nota "<<z;
       }else{
    if(z<=3.9&&z==0){
          cout<<"\n O conceito bimestral e E sua nota "<<z;

        }
      }
    }
  }
}

return 0;
}
