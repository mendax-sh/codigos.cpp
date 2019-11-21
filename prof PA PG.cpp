#include<iostream>
using namespace std;
int main(){
int a1,r,n,i,op;
do{
    cout<<"1-pa"<<endl<<"2-pg";
    cin>>op;
    } while(op!=1&&op!=2);
    cout<<"informe o A1";
    cin>>a1;
    do{
        cout<<"informe o numero de termos";
        cin>>n;
    }while(n<2);
    if(op==1){
        do{
            cout<<"informe a razao";
            cin>>r;
        }while(r==0);
        i=1;
        while(i<=n){
                cout<<a1<<"  ";
        a1=a1+r;
        i=i+1;
        }
    }else{
    cout<<"informe a razao";
    cin>>r;
    }while(r==0||r==1);
    i=1;
    while(i<=n){
        cout<<a1<<"  ";
        a1=a1*r;
        i=i+1;
    }
 return 0;
}
