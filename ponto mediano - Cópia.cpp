#include <iostream>
using namespace std;
int main(){
	float f,i,p,y,l=2;
	while (l>1){
	cout<<"valor final"<<endl;
	cin>>f;
	cout<<"valor inicial"<<endl;
	cin>>i;
	cout<<"porcentagem"<<endl;
	cin>>p;
	
	y=(f-i)*p/100;
	cout<<"resultado do ponto mediano  "<<y<<endl;
	
	cout<<"continuar?"<<endl;
	cout<<"2-sim"<<endl;
	cout<<"1-nao"<<endl;
	cin>>l;
}
	return 0;
}
