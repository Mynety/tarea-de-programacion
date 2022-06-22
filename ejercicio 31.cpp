// Ejercicio 31

#include <stdio.h>

int main (){
	
	int num, total = 0, cont = 0, i = 0;
	double suma, result;
	do{
		
		printf("Ingresa un numero:");
		scanf("%i", &num);
		++i;
		
		if(num < 0){
			
			total = total + num;
		}
		
		else if (num > 0){
			cont = cont + 1;
			
			suma = suma + num;
			
			result = suma / cont;
			
		}
	}
		
		while (i <= 5);
		printf("La suma de los numeros negativos es: %i \n",total);
		printf("el promedio de los numeros positivos es:%.2lf \n",result);
		
	
	

return 0;
	
}
