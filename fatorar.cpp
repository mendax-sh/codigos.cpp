#include<iostream>
using namespace std;
int main (){
       int n, p=2, q=0,f, d;

       cout<<"Informe n: ";
       cin>>n;

       while (n > 1) {

                while (n % p == 0) {
                q = q + 1;
                        n = n / p;
             }
              if (q > 0){
              cout<<"\n fatoracao = "<<p,q;
              f= 0;}
              while (!f) {
                       p = p + 1;
                       d = 2;
                       f = 1;
                  while (d <= p / 2 && f ) {
                       if (p % d == 0){
                            f = 0;
                       }else{
                            d = d + 1;
           }
          }
         }
       }
   return 0;
}
