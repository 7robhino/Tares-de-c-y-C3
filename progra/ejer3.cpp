#include<iostream>
using namespace std;

int main(){
	int vector[5];
	int i,nuevo_valor;
	
	for(i=0;i<5;i++){
		cout<<i+1<<" .ingrese Num: "; 
		cin>>vector[i];
	}
	
	for(i=0;i<5;i++){
		
		if(vector[i]%2==0){
			nuevo_valor = vector[i] + 1;
		}
		else{
			nuevo_valor = vector[i] -2;
		}
		
		if(nuevo_valor < 0){
			nuevo_valor = 0;
		}
		
		cout << "Elemento " << i + 1 << ": " << vector[i]<< " -> Mejora: " << nuevo_valor <<endl;
		
	}
	
	
	
	
		
	
	



}