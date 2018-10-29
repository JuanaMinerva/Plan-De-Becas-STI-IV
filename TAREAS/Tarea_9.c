#include<stdio.h>
#include<ctype.h>

int main () {

char letra;

printf("\nIntroduce una letra\npara saber si es una\nvocal: ");
scanf(" %c",&letra);

letra = tolower(letra);

switch(letra)  {
	case'a':
	case'e':
	case'i':
	case'o':
	case'u':

printf("\n\tSu letra\"%c\"es una vocal\n\n",letra);
break;

default:

printf("\nSu letra\"%c\"es una consonante\n",letra);
}

}

