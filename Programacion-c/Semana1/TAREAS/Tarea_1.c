#include<stdio.h>

int main()    {

int numero1, numero2, resultado;

printf("Ingrese el valor1:");
scanf("%d", &numero1);

printf("Ingrese el valor2:");
scanf("%d", &numero2);

printf("El valor de su numero es: %d\n",numero1);
printf("El valor de su numero es: %d\n",numero2);

resultado = numero1 + numero2;
printf("La suma de los numeros es: %d\n",resultado);

resultado = numero1 - numero2;
printf("La resta de los numeros es: %d\n",resultado);

resultado = numero1 * numero2;
printf("La multiplicacion de los numeros es: %d\n",resultado);

resultado = numero1 / numero2;
printf("La division de los numeros es: %d\n",resultado);

resultado = numero1 % numero2;
printf("La operacion modulo es: %d\n",resultado);


      if (numero1 > numero2)  {

      printf("\n\n");
      printf("El primer numero es mayor que el segundo\n");




  }
  }
