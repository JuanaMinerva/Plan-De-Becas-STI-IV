#include<stdio.h>


int main ()   {


int Tipo=0;
char letra;

printf("\nIntroduce una letra\n para saber si es una vocal:\n ");
scanf("%c", &letra);

	if(letra == 'a')
		Tipo = 1;
	if(letra == 'e')	
		Tipo = 1;
	if(letra == 'i')
		Tipo = 1;
	if(letra == 'o')
		Tipo = 1;
	if(letra == 'u')
		Tipo = 1;
	if(letra == 'A')
		Tipo = 1;
	if(letra == 'E')
		Tipo = 1;
	if(letra == 'I')
		Tipo = 1;
	if(letra == 'O')
		Tipo = 1;
	if(letra == 'U')
                Tipo = 1;

	if(Tipo==1){
	printf("Su letra es una vocal %c\n", letra);    }
		else
		printf("\n\tSu letra \"%c\" es una consonante\n\n", letra);

return 0;

 }






