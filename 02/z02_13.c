// Fig. 2.13: fig02_13.c
// Using if statements, relational
// operators, and equality operators.
#include <stdio.h>

int main(void)
{
printf("Informe 2 numeros inteiros pfv:\n");
//printf("Informe 2 numeros agooooora:\n");

int num1;
int num2;

scanf("%d %d", &num1, &num2); //atribuindo nome aos bois

if (num1 == num2){
	printf("Sao iguais, claro");
} else {
	printf("Sao diferentes, obvio");
	}
return 0;
}
