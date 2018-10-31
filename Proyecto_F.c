#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()   {

//variables
int m1[5][5];
char m2[5][5];
int i, j, fil, col, cont=0, puntos=0, mina=0;

srand(time(NULL));

//Se llena el tablero de la buscamina
for (i=0; i<5; i++)   {
	for(j=0; j<5; j++)  {
	m1[i][j] = (rand() % 4) +47;
	}
}


//Busca cuantas minas hay
for (i=0; i<5; i++)  {
	for(j=0; j<5; j++)  {
		if(m1[i][j]==47)  {
		mina++;
		}
	}
}

//Instrucciones del juego
printf("Has entrado en el mundo de las buscaminas muajaja\n\n\n");

//Se llena un tablero con 'x' que se va a mostrar
printf("     1  2  3  4  5 \n");
for (i=0; i<5; i++)  {
	printf(" %2d ", i+1);
	for(j=0; j<5; j++)  {
	m2[i][j] = 'x';
	printf(" %c ", m2[i][j]);
	}
	printf("\n");
}
printf("\n\n\nSi te atreves a continuar solo tienes que...\n");

//Ciclo para iniciar el juego
while(cont != 25-mina) {


//Se lleva una cuenta de las entradas que se muestran
cont++;

/*Se piden el numero de renglon y el numero de columna con el "do" 
realiza la instruccion dentro hasta obtener validos*/
do {
	printf("Ingresa el numero de la fila: ");
	scanf("%d", &fil);
	printf("Ingresa el numero de la columna: ");
	scanf("%d", &col);
	if(fil <1 || fil > 5 || col <1 || col >5)   {
		printf("No has entendido el punto, intentalo de nuevo\n");
	}
}
while(fil<1 || col<1 || fil>5 || col >5);

//se cambia la entrada en la matriz que se muestra
m2[fil-1][col-1] = m1[fil-1][col-1];

printf("\n\n\n");


//Se muestra la matriz con el cambio de entrada
printf("     1  2  3  4  5 \n");
for(i=0; i<5; i++)  {
	printf(" %2d ", i+1);
	for(j=0; j<5; j++)  {
	printf(" %c ", m2[i][j]);
	}
	printf("\n");
}


//Instruccion que termina el juego cuando sale una mina
if(m1[fil-1][col-1]==47)   {
	printf("\n\n\nERES COMIDA PARA GATO JEJE\n");
	printf("Solo lograste %d puntos, suerte para la proxima!\n\n", puntos);
	break;
}

//Se suman los puntos
puntos = (puntos + m1[fil-1][col-1]) - 48;

printf("\nHas ganado %d puntos\n\n\n", puntos);   }

//Fin de juego
if(cont ==25-mina)  {
printf("¡Felicidades, terminaste el juego!\n\n");
}

}








































 




 













