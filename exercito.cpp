#include <iostream>
using namespace std;
int main () {
	float s,i,m;

	cout<<" Digite 1 para masculino \n";
	cout<<" Digite 2 para feminino ";
	cin>>s;

	if (s==1){
	cout<<" digite a idade ";
	cin>>i;
	if (i>=18 && i<=25){
		    cout<<" alistamento  obrigatorio ";
	}else if(i>=26){
		m=i*100;
	cout<<" valor da multa "<<m;
	}
	}
    else if(s==2){

    	    cout<<" digite a idade ";
    	    cin>>i;
    if( i>=18 ){
    	 	cout<<" alistamento opcional ";
        }else{
    	 	cout<<" voce nao pode se alistar ";
    	 }
    	}




	return 0;

}


