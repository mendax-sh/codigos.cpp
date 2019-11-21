#include<iostream>
using namespace std;
int main() {
    float x,z,c;
     
     cout<<"\n digite o valor de um dos lados do terreno ";
     cin>>x;
     cout<<"\n digite o valor de outro lado do terreno ";
     cin>>z;
     
     c=x*z;
     
     
     if(c<499){
        cout<<"\n não é neceçario subir o valor do terreno "<<c;
        
         }else{
     
     if(c>=500){
            
        cout<<"\n suba o valor em 20 por cento "<<c;
     }
   }
          
        
 return 0;
}
