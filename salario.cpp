#include<iostream>
using namespace std;
int main () {
    float x,y;

    cout<<"\n Digite seu salario ";
    cin>>x;

      if(x<=280){
        y=(x*20)/100;
        cout<<"\n salario inicial "<<x;
       cout<<"\n reajuste 20% ";
      cout<<"\n valor do salario "<<y;
         }else{
      if(x>=281&&x<=700){
        y=(x*15)/100;
        cout<<"\n salario inicial "<<x;
       cout<<"\n reajuste 15% ";
      cout<<"\n novo valor do salario "<<y;
        }else{
      if(x>=701&&x<=1500){
        y=(x*15)/100;
        cout<<"\n salario inicial "<<x;
       cout<<"\n reajuste 10% ";
      cout<<"\n novo valor do salario "<<y;
        }else{
      if(x>=1500){
        y=(x*10)/100;
        cout<<"\n salario inicial "<<x;
       cout<<"\n reajuste 10 ";
      cout<<"\n novo valor do salario "<<y;
        }
     }
    }

         }


return 0;
}
