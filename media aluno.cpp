#include<iostream>
using namespace std;
int main () {
    float a,b,c,d,e;
     cout<<"\n digite a primeira nota ";
     cin>>a;
     cout<<"\n digite a segunda nota ";
     cin>>b;
     cout<<"\n digite a terceira nota ";
     cin>>c;
     cout<<"\n digite a quarta nota ";
     cin>>e;


     e=(a+b+c+d)/4;

     if(e<4){
        cout<<"\n aluno reprovado ";
     }else{
     if(e>=5&&d<=6){
        cout<<"\n aluno de PF ";
     }else{
     if(e>=7&&d<=10){
        cout<<" aluno aprovado ";
     }
   }
}

return 0;
}
