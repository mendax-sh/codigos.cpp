#include<iostream>
using namespace std;
int main () {



    float a,b,c,x,p;



    cout<<"\n digite 1 para somar ";
    cout<<"\n digite 2 para subtrair ";
    cout<<"\n digite 3 para multiplicar ";
    cout<<"\n digite 4 para dividir\n ";
    cin>>x;

    cout<<"\n digite valor de a ";
    cin>>a;
    cout<<"\n digite valor b ";
    cin>>b;
    if (x==1){
        c=a+b;
    }

    if (x==2){
        c=a-b;
    }


    if (x==3){
        c=a*b;
    }

    if (x==4){
    if (b==0){cout<<" numero invalido ";
    }else{ c=a/b;
      cout<< " resultado "<<c;
    }



}else{


     cout<< " resultado "<<c;

cout<<"\n quer continuar digite 1 para continuaar e 0 para sair \n";
cin>>p;



}

return 0;

}
