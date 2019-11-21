#include<iostream>
using namespace std;
int main (){
    char op;
    int c=0;
    float a,b,d;
 cout<<"\n Digite s para executar o programa ou n para não excutar \n";
 cin>>op;
 while(op!='n'){

    cout<<"\n digite um valor \n";
    cin>>a;
    cout<<"\n Digite um valor \n";
    cin>>b;

    d=a+b;

    cout<<" Resultado = "<<d;

    cout<<"\n  Digite s para executar o programa ou n para não excutar \n";
    cin>>op;
 }

return 0;
}
