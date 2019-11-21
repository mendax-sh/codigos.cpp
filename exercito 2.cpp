#include <iostream>
using namespace std;
int main () {
	float s,i,m;
	
	cout<<" digite o 1 para masculino e 2 para feminino ";
	cin>>s;
	
	if (s==1){ 
	cout<<" digite a idade ";
	cin>>i;
	if (i>=18&&<=25){
		cout<<" alistamento  obrigatorio ";	
	}else{ 
	m=i*100;
	cout<<" valor da multa "<<m;
	}	
    	}else{
    	 cout<<" digite a idade ";
    	 cin>>i;
    	 if( >=18 ){
    	 	cout<<" alistamento opcional ";
    	 }else{
    	 	cout<<" voce não pode se alistar ";
    	 }
    	}
	

    
	
	return 0;
}

