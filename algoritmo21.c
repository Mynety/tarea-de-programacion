/*5. Calcular el mayor de tres números leídos del teclado y visualizarlo en pantalla.*/

#include<stdio.h>

int main(){
	int n1,n2,n3;
	
	printf("Digite 3 numeros: ");
	scanf("%i %i %i",&n1,&n2,&n3);
	
	if(n1 > n2){
		printf("\nEl mayor es: %i",n1);
	}
	
	
	
  else 
  if(n2>n3){
	printf("\nEl mayor es: %i",n2);
	}
else{
	printf("\nEl mayor es: %i",n3);
	}
	
	
	
	return 0;
}
