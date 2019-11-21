#include <iostream>
using namespace std;
int main(){
	float j,p,i,n,l=2;
	while (l>1){
	cout<<"valor de p"<<endl,
	cin>>p;
	cout<<"valor de i"<<endl;
	cin>>i;
	cout<<"valor de n"<<endl;
	cin>>n;
	
	j=p*i*n;
	cout<<"valor de "<<j<<endl;
	cout<<"continuar?"<<endl;
	cout<<"2-sim"<<endl;
	cout<<"1-nao"<<endl;
	cin>>l;
}
	return 0;
}
