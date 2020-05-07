#include <stdio.h>
int main(void){
    int a, b, sum;
    printf("Enter 2 numbers: ");
    scanf("%d%d", &a, &b);
    sum = a + b;
    printf("\nThe sum is %d from %d and %d.", sum, a, b);
return 0;
}
