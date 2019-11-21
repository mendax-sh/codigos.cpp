#include<iostream>
using namespace std;
int main() {
    float g,a,d,x,f,r,y,q,l;
    cout<<"\n digite 1 para gasolina ";
    cout<<"\n digite 2 para alcool ";
    cout<<"\n digite 3 para disel \n";
    cin>>x;

    if(x==1){
    cout<<"\n digite 1 para abastecer em litros ";
    cout<<"\n digite 2 para abastecer em reais ";
    cin>>f;
    if (f==1){
    cout<<"\n digite a quantidade de litros ";
    cin>>l;
      q=l/2.50;
    cout<<"\n quantidade "<<q;
      }else{
    if (f==2){
    cout<<"\n digite o valor ";
    cin>>r;
      q=r*2.50;
    cout<<"\n quantidade "<<q;
    }

      }
    }

    if (x==2){
    cout<<"\n digite 1 para abastecer em litros ";
    cout<<"\n digite 2 para abastecer em reais ";
       cin>>f;
    if (f==1){
    cout<<"\n digite a quantidade de litros ";
    cin>>l;
        q=l/1.30;
    cout<<"\n quantidade "<<q;
      }else{
    if (f==2){
    cout<<"\n digite o valor ";
    cin>>r;
        q=r*1.30;
    cout<<"\n quantidade "<<q;

      }
   }

}
    if (x==3){
    cout<<"\n digite 1 para abastecer em litros ";
    cout<<"\n digite 2 para abastecer em reais ";
       cin>>f;
    if (f==1){
    cout<<"\n digite a quantidade de litros ";
    cin>>l;
        q=l/2.00;
    cout<<"\n quantidade "<<q;
      }else{
    if (f==2){
    cout<<"\n digite o valor ";
    cin>>r;
        q=r*2.00;
    cout<<"\n quantidade "<<q;
    }
  }
}

 return 0;
}
