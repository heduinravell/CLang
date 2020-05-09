#include <stdio.h>

int main(void){
int x=0,y=0;
float div;  //compare float(%.6f) vs double(%.16f)
    printf("Type 2 integers: ");
    scanf("%d%d",&x,&y);
    printf("\nSum:\t\t%d", x+y);
    printf("\nProduct:\t%d", x*y);
    printf("\nDifference:\t%d", x-y);
    //div by zero test
    /*if (x>y && x*y != 0){
        div = x/y;
    } else {
        div = y/x;
    }*/
    div = (float)x/y;  //(double or float)
    //div = 1.0*x/y;
    printf("\nQuotient:\t%.6f", div);

    printf("\nRemainder:\t%d = %d (mod %d)", x, x%y, y);



    return 0;
}
