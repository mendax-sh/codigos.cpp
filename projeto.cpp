#include<iostream>
using namespace std;
int main() {
	char a,b,c;
	
cout<<"\n informe sua idade ";

cout<<"\n a para <16 ";
cout<<"\n b para >15 e <40 ";
cout<<"\n c para >40 \n";
cin>>a;

cout<<"\n nivel de escolaridade ";
cout<<"\n a para ensino fundamental ";
cout<<"\n b para ensino medio ";
cout<<"\n c para ensino superior \n";

cin>>b;

cout<<"\n informe seu salario ";

cout<<"\n a para 1 salario minimo ";
cout<<"\n b para 2 a 5 salarios minimos  ";
cout<<"\n c para mais que 5 salarios minimos ";
cout<<"\n d para sem salario \n";
cin>>c;

    if(a=='a'&&b=='c'&&c=='c'){
		cout<<"\n questionario eliminado ";}
     	
return 0;
}
