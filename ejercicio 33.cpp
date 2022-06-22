//EJERCICIO 33

#include <stdio.h>

int main (){
	
	char aceptar;
	int cont1 = 0, num;
	double a, b, acum, cont2;
	
	do{
		printf("¿Desea analizar las calificaciones de los alumnos? (S/N)");
		scanf("%c",&aceptar);
		
		if (aceptar == 'S'|| aceptar == 's'){
			
			cont1= cont1 + 1;
			printf("Ingresa la calificacion:");
			scanf("%i",&num);
			
			if(num > 4 ){
				printf("El alumno ha sido aprobado \n");
				
				cont2 = cont2 + 1;
				acum = acum + num;
			}
			else{
				if(num <= 4){
					printf("El alumno no ha sido aprobado \n"); 
				}
				}
			}
		
		fflush (stdin);
		
	} while (aceptar == 'S' || aceptar == 's');
	
	a = cont2 + 100/cont1;
	
	b = acum / cont2;
	
	printf("El porcentaje de alumnos apriobados es:%.2lf \n",a);
	printf("El promedio de los alumnos es:%.2lf  \n",b);
	
	
	



	
	return 0;
}
	

