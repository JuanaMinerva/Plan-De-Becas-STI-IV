#include<stdio.h>
#include<string.h>


int main ()   {

char cadena1[5]="Hola";
char cadena2[5]="Adios";
char cadena3[]="ESTA ES OTRA CADENA";
char cadena4[40];


printf("Su cadena 4 contiene %s\n",cadena4);
strcpy(cadena4,cadena1);


printf("cadena 4 contiene %S\n", cadena4);

strncpy(cadena4,cadena1,3);

printf("cadena 4 contiene %S\n", cadena4);

printf("cadena concatenada %s\n",strcat(cadena1,cadena2));

return 0;

}





