#include<iostream>
using namespace std;
int main () {

    int x=1;
    float r;

    while(x!=0){

        cout<<"\n Escolha abaixo o programa que deseja executar. ";
        cout<<"\n Digite 1 para iniciar o somador de media aritimetica ";
        cout<<"\n Digite 2 para iniciar a calculadora ";
        cout<<"\n Digite 3 para iniciar o contador de fibonacci ";
        cout<<"\n Digite 4 para iniciar o somador de progresao aritimetica e progresao geometrica \n";
        cin>>r;


    if(r==1){


        int p=1;
        float a,n,r,d,x;

    while(p!=0){

            cout<<"\n informe o valor de a ";
            cin>>a;
            cout<<"\n informe o valor de r ";
            cin>>r;
            cout<<"\n informe o valor de n ";
            cin>>n;


            d=a+(n-1)*r;

            cout<<"\n resultado "<<d;

            x=d*2;

            cout<<"\n resultado "<<x;

        cout<<"\nDigite 0 para voltar ao menu principal ou 1 para repetir o programa  ";
        cin>>p;

    }

    }else{


   if(r==2){

        int o;
        float a,b,c,x;

    do{

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
             cout<< " Resultado "<<c;

        }



        cout<<"\nDigite 0 para voltar ao menu principal ou 1 para repetir o programa  ";
        cin>>o;


    }while(o!=0);


   }else{

    if(r==3){


        int c=1;
        int a=0, b=1, auxiliar, i, n;

    while(c!=0){

                cout<<"Digite quantas vezes a sequancia deve ser executada : ";
                cin>>n;
                cout<<" Série de Fibonacci= ";
                cout<<" "<<b;


            for(i = 0; i < n; i++)
            {
            auxiliar = a + b;
            a = b;
            b = auxiliar;

            cout<<" "<<auxiliar;
            }

        cout<<"\nDigite 0 para voltar ao menu principal ou 1 para repetir o programa  ";
        cin>>c;
    }

    }else{

      if(r==4){
            int a=1;
            int a1,r,n,i,op;

        while(a!=0){

        do{
                cout<<"1-pa"<<endl<<"2-pg";
                cin>>op;
        }while(op!=1&&op!=2);
                cout<<"Informe o A1";
                cin>>a1;

    do{
                cout<<"Informe o numero de termos";
                cin>>n;
    }while(n<2);
    if(op==1){
        do{
                cout<<"Informe a razao";
                cin>>r;
        }while(r==0);
        i=1;
        while(i<=n){
                cout<<a1<<"  ";
        a1=a1+r;
        i=i+1;
        }
        }else{
                cout<<"Informe a razao";
                cin>>r;
            }while(r==0||r==1);
                i=1;
                while(i<=n){
                cout<<a1<<"  ";
                a1=a1*r;
            i=i+1;

            cout<<"\nDigite 0 para voltar ao menu principal ou 1 para repetir o programa  ";
            cin>>a;
           }
          }
         }
        }
       }
      }

   cout<<" Digite 1 pra voltar ao menu principal ou 0 para finalizar o programa ";
   cin>>x;
}
return 0;
}
