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
// num1 = num2;
// 0 == false; !0 = true

if (num1 == num2){
	printf("São iguais, claro\n");
} else {
	printf("São diferentes, óbvio\n");
	if (num1 > num2){
		printf("E digo mais... %d é maior do que %d", num1, num2);
	} else {
		printf("Teimo em dizer que %d é maior do que %d", num2, num1);
	} 	
}
	
return 0;
}
