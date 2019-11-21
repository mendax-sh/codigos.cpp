#include<iostream>
using namespace std;
int main (){
    float a,b,c;
    char op=0;

do{
    cout<<"\n Digite um valor \n";
    cin>>a;
    cout<<"\n Digite um valor \n";
    cin>>b;

    c=a+b;

    cout<<" Resultado = "<<c;

    cout<<"\n Digite 0 para executar novamente ou 1 para parar \n ";
    cin>>op;
}while(op!=0);

 return 0;
}
