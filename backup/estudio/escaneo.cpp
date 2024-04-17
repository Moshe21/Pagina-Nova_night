#include <stdio.h> 

int main(){
	
	int nombre;
	int edad;
	
	printf("coloca tu primer numero");
	scanf("%d",&nombre);
	
	printf("coloca tu sugundo numero");
	scanf("%d",&edad);
	
	printf("puedes tomar cerveza\n");
	if(edad>=18){
		
	printf(nombre,"%d tome su cerveza");
	}
	else{
		printf( nombre," no puede tomar%d");
	}
	

}

