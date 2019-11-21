#include <iostream>
using namespace std;
int main ( )
{
    int a=3,i=0,n,j=1;

    cout<<"\n Digite o numero de vezes que a sequensia sera repetida: ";
    cin>>n;
    cout<<"\n\nSequencia\n\n";

    while(i<n)
    {

        if((a/9)==j)
        {
            cout<<" "<<j;
            j++;
        }
        else
        {
            cout<<" "<<a;
        }
        a=a+3;
        i++;
    }
    return 0 ;
}
