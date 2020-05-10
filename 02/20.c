#include <stdio.h>
//convert milisec to d:h:m:s:ms
int main (void)
{

    int d, h, m, s, ms;
    printf("\nGimme the ms: ");
	//receive ms
    scanf("%d", &ms);

    s = ms/1000; //get the integer
    ms = ms%1000;// get the remainder

    m = s/60;
    s = s%60;

    h = m/60;
    m = m%60;

    d = h/24;
    h = h%24;

    printf("\n%dd:%dh:%dm:%ds:%dms\n",d,h,m,s,ms);


    return 0;
}
