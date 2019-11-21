#include<iostream>
using namespace std;
int main ( ) {
      int a=1,b=2,i=0,n;

    cout<<"\n Digite o numero de vezes que a sequensia sera repetida: ";
    cin>>n;
    cout<<"\n\nSequencia\n\n";

    while(i<n){


    cout<<" "<<a;
    a=a+2;

    cout<<" "<<b;
    b=b+4;
    i++;
  }

return 0 ;
}
