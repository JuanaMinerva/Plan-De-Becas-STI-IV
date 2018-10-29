#include<stdio.h>
#include<stdlib.h>


//Generar aleatorios
//rand () funcion para generar numeros aleatorios

int main () { 

int arreglo[4],i;

	
for(i = 0; i <= 4; i++) {
	arreglo[i] = rand() ;
 
}

for(i =0; i <= 4; i++)

printf("Sus numeros aleatorios %d, es : %d\n",i+1,arreglo[i]);



 }



