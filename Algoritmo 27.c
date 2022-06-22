#include<stdio.h>
int main(){
	int n1;
	int n2;
	int i ;
	
	printf("Digite dos numero");
	scanf("%i %i",&n1,&n2);
	
	if(n1>n2){
		printf("No es el orden correcto");
	}
	else{
		for(i=1; i<=n2 ;i++){
		printf("%i.\n",i); 
		}
		}
return 0;
}
