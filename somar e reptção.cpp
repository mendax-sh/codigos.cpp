#include<iostream>
using namespace std;
int main (){

    float a,b,c;
   int x;


        do{
            cout<<" Digite um valor\n";
            cin>>a;
            cout<<" Digite o valor a ser somado\n";
            cin>>b;

            c=a+b;

            cout<<"\n\n"<<c;

            cout<<"\nDeseja executar novamente o programa 1 p/ sim e 0 p/ nao\n ";
            cin>>x;


        }while(x!=0);



return 0;
}
