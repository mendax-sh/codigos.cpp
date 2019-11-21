#include <iostream>
using namespace std;
int main(){
char r1,r2,r3;
cout<<"1-informe sua faixa etaria"<<endl;
cout<<"a-<16"<<endl;
cout<<"b->15&&<40"<<endl;
cout<<"c->=40"<<endl;
cin>>r1;

cout<<"2-sua escolaridade"<<endl;
cout<<"a-ensino fundamental"<<endl;
cout<<"b-ensino medio"<<endl;
cout<<"c-ensino superior"<<endl;
cin>>r2;

cout <<"3-salaria"<<endl;
cout <<"a-1/salario minimo"<<endl;
cout <<"b-2a5 salario minimos"<<endl;
cout <<"c-+5 salarios minimos"<<endl;
cout<<"d-sem salario"<<endl;
cin>>r3;

if(r1=='a'&&r2=='c'){
cout<<"questtionario eliminado\n repostas incoerentes\n";
}else{
	
	if(r1=='a'&&r3=='b'){
		cout<<"vc ta mentido safado"<<endl;
	}else{
		if(r1=='c'&&r3=='d'){
			cout<<"vai trabalhar vagabundo"<<endl;
		}else{
			if(r1=='a'&&r3=='c'){
				cout<<"vai menti pra outro"<<endl;
			}
		}
	}
}
return 0;
}
