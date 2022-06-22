//EJERCICIO 35

#include <stdio.h>

int main (){
	
	int mult=0, n, num, par, impar, x, res1, res2, res3;
	
	do{
		printf("Ingrese un numero:");
		scanf("%i",&num);
		
		if(num < -1){
			printf("Error, por favor ingrese solo numeros positivos \n");
			
		}
		
		else{
			n = num;
		    res1 = n%2 == 0;
		    par = par + res1;
		    res2 = n%2 == 1;
		    impar = impar + res2;
		    res3 = n%3 == 0;
		    mult = mult + res3;
		    }
		
	}while(num != -1);
	printf("La cantidad de numeros pares es: %i \n", par);
	printf("La cantidad de numeros impares es: %i \n", impar);
	printf("La cantidad de multiplos de 3 es: %i \n", mult);
	
	return 0;
}
