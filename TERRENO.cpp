#include<iostream>
using namespace std;
int main() {
    float x,z,c;

     cout<<"\n digite o valor de um dos lados do terreno ";
     cin>>x;
     cout<<"\n digite o valor de outro lado do terreno ";
     cin>>z;

     c=x*z;

     if(c<500){
            cout<<"\n n�o � nece�ario subir o valor do terreno "<<c;

          }else{

     if(c>=500){
            cout<<"\n suba o valor em 20% "<<c;
    }
}


return 0;
}
