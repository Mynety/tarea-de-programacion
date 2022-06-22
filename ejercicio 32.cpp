
#include <stdio.h>

int main (){
	
	int  A, B, C, D, E, max;
		
		printf("ingrese un numero:");
		scanf("%i",&A);
		
		printf("ingrese un numero:");
		scanf("%i",&B);
			
		printf("ingrese un numero:");
		scanf("%i",&C);
		
		printf("ingrese un numero:");
		scanf("%i",&D);	
		
		printf("ingrese un numero:");
		scanf("%i", &E);
	
	if(A > B){
		(A > C);
		(A > D);
		(A > E);
		
		 max = A;
	}
	else 
	
	max = B;


	if(C > D){
		(C > B);
		(C > A);
		(C > E);
		max = C;
	}
			
	else 
		max = D;
			
	if (E > A){
		(E > B);
		(E > C);
		(E > D);
		max = E;
		 
}
		printf("El mayor de todos es:%i",max);
			
	
return 0;
}


