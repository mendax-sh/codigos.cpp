#include<iostream>
using namespace std;
int main () {
    float a,b,c,x;

    cout<<"\n digite o primeiro valor ";
    cin>>a;
    cout<<"\n digite o segundo valor ";
    cin>>b;
    cout<<"\n digite o terceiro valor ";
    cin>>c;

    if(a,b,c==0){
         cout<<"\n valor nulo ";
    }else{
    if(a<b&&a<c){
         cout<<" maior valor "<<a;
      }else{
    if(b<a&&b<c){
         cout<<" maior valor "<<b;
      }else{
    if(c<a&&c<b){
         cout<<" maior valor "<<c;
      }
    }
  }
}

return 0;
}
