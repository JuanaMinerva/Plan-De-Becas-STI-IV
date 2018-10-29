#include<stdio.h>
#inlcude<math.h>

int main () {

char op
float num1 = 0
float num2 = 0


printf("\Calculadora basica\n\n");
printf("%f %c %f", &num1, op, num2);

if(op == '+')  {

	printf(" = %f", num1 + num2);
}
else if(op == '-')  {

	printf(" = %f", num1 - num2);
}
else if(op == '*')  {

	printf(" = %f", num1 * num2);
}
else if(op == '/')  {

	printf(" = %f", num1 / num2);
}

else 
{

	printf("\n Lo sentimos operacion desconocida");
return 0;
}


