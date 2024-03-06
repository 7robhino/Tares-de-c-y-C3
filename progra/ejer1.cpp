#include<iostream>
using namespace std;

int main(){
	
	int vector[] = {0,1,2,3,4,5,6,7,8,9};
	
	for(int i=0;i<10;i++){
		
		if(i==0){
			if(vector[i]== 0){
				cout<<"numero neutro"<<endl;
			}
			else if(vector[i]>0){
				cout<<"numero positivo"<<endl;
			}
			else{
				cout<<"numero negativo"<<endl;
			}
		}
		
		if(i==5){
			if(vector[i]== 0){
				cout<<"numero neutro"<<endl;
			}
			else if(vector[i]>0){
				cout<<"numero positivo"<<endl;
			}
			else{
				cout<<"numero negativo"<<endl;
			}
		}
		
		if(i==9){
			if(vector[i]!=0){
				cout<<"Diferente a cero"<<endl;
			}
			else{
				cout<<"es cero"<<endl;
			}
			
		}		
	}
	
	
	
	
	return 0;
}