#include<iostream>
using namespace std;

int main(){
	
	char numero[6],rpt;

	do{
		
		cout<<"Ingrese valores: ";
		cin>>numero;
		
		cout<<"Valor invertido: "<<strrev(numero);
		
		cout<<"\nseguir (S/N): ";
		cin>>rpt;
	} while((rpt == 's')||(rpt =='S'));

	return 0;
}