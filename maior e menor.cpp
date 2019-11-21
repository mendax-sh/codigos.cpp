#include<iostream>
using namespace std;
int main () {

float a,b;
int c;


for(c=1 ; c <= 11 ; c++)
{



    cout<<"\n digite valor de a ";
    cin>>a;
    cout<<"\n digite valor de b ";
    cin>>b;

    if (a==0&&b==0){
        cout<<" valor nulo ";
    }


    if(a>b){
        cout<<"\n  valor maior "<<a;
    }else{
        cout<<"\n  valor maior "<<b;
    }

}











return 0;
}
