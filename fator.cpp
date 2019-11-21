#include<iostream>
using namespace std ;
int main ()
{
    int divisor=2, valor;

   cout<<("digiote o valor");
    cin>>valor;
    while (valor!=1)
    {
        if (valor%divisor==0)
        {
           cout<<("  \n", divisor);
            valor=valor/divisor;
            divisor=2;
        }
        else
        {
            divisor++;
        }
    }
    return 0;
}
