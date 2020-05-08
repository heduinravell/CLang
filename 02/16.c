#include <stdio.h>

int main(void){
int x,y;
    printf("Type 2 integers: ");
    scanf("%d%d",&x,&y);
    printf("\nSum:\t\t%d", x+y);
    printf("\nProduct:\t%d", x*y);
    printf("\nDifference:\t%d", x-y);
    printf("\nQuotient:\t%d", x/y);
    printf("\nRemainder:\t%d = %d (mod %d)", x, x%y, y);



    return 0;
}
