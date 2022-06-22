//EJERCICIO 34

#include <stdio.h>

int main (){
	
	int suma=0, n;
	
	printf("Ingrese un numero:");
	scanf("%i",&n);
	
	int num = n;
	
	while (num != 0){
		
		suma = suma + (n%15);
		n= n/15;
		
}
	 
	 printf("La suma de los numeros de es: %i ",n);
	 

		
	return 0;
	
}
	
	
