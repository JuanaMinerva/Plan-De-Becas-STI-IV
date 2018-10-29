#include<stdio.h>


int main ()    {

int contador;
int numero[5];


	printf("Ingresa seis numeros\n" );

	for(contador = 0; contador <= 5; contador++)

	 {

	
	printf("Ingresa un entero #%d: " , contador + 1);
	scanf("%d", &numero[contador]);

	 }
	

	printf("\n\n");

	for(contador = 0; contador <=5; contador++)

 	{

	printf("Su numero %d fue: %d\n", contador + numero[contador]);

	 }

	 	}


