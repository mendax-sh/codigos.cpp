#include<iostream>
using namespace std ;
int main (){


  int a=0, b=1, auxiliar, i, n;




    cout<<"Digite quantas vezes a sequancia deve ser executada : ";
    cin>>n;
    cout<<" S�rie de Fibonacci= \n";
    cout<<" "<<b;


  for(i = 0; i < n; i++)
  {
    auxiliar = a + b;
    a = b;
    b = auxiliar;


    cout<<" "<<auxiliar;
  }
}
