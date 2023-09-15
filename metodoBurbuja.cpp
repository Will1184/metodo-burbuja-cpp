#include <iostream>
#include<conio.h>
using namespace std;
int main() {
	
	int numeros[5]={3,1,4,2,5};
	int i,j,aux;
	
	//Metodo Burbuja
	for(i=0;i<5;i++ ){		
		for(j=0;j<5;j++){
			if(numeros[j] > numeros[j+1]){				
				aux = numeros[j];
				numeros[j]=numeros[j+1];
				numeros[j+1]=aux;
			}
		}			
	}
	cout<<"Orden Ascendente ";
	for(i=0;i<5;i++){
		cout<<numeros[i];
	}
	cout<<"\nOrden Descendente ";
	for(i=4;i>-1;i--){
		cout<<numeros[i];
	}
	
	
	getch();
	return 0;
}
