#include<iostream>
using namespace std;
int main (){
    float t;


      cout<<" Bem vndo a nossa loja \n";

      cout<<" Digite o tamanho desejado ";
      cin>>t;

      if(t>=5&&t<=10){
        cout<<" tamanho pequeno ";
      }else{

      if(t>=11&&t<=15){
        cout<<" tamanho medio";
      }else{

      if(t>=16&&t<=20){
        cout<<" tamanho grande ";
      }else{

      if(t<5||t>21){
        cout<<" n�o produzimos este tamanho ";
       }
     }
   }
 }
return 0;
}
