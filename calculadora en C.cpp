void menu();
void sumar(int numero_a , int numero_b);
void restar(int numero_a , int numero_b);
void multiplicar(int numero_a , int numero_b);
void dividir(int numero_a , int numero_b);

#include <stdio.h>

int menu(){
	menu();
	return 0;
}
void menu(){
	int opcion;
	printf("\n 1. sumar");
	printf("\n 2. restar");
	printf("\n 3. multiplicar");
	printf("\n 4. dividir");
	
	printf("\n digite su opcion");
	scanf("%i" , &opcion);
	
	int numero_a , numero_b
	
	printf("\n digite valor de numero1: ");
	scanf("%i" , &numero_a);
	
	printf("\n digite valor de numero2: ");
	scanf("%i" , &numero_b);
	
	switch(opcion)
	{
		case 1: sumar(numero_a , numero_b); 
		break;
		case 1: restar(numero_a , numero_b); 
		break;
		case 1: multiplicar(numero_a , numero_b); 
		break;
		case 1: dividir(numero_a , numero_b); 
		break;
		default;
		printf("opcion invalida");
	}
}

void sumar(int numero_a , int numero_b)
{
	printf("el resultado de su calculo: %i " , numero_a + numero_b)
}
void restar(int numero_a , int numero_b)
{
	printf("el resultado de su calculo: %i " , numero_a - numero_b)
}
void multiplicar(int numero_a , int numero_b)
{
	printf("el resultado de su calculo: %i " , numero_a * numero_b)
}
void dividir(int numero_a , int numero_b)
{
	printf("el resultado de su calculo: %i " , numero_a / numero_b)
}
