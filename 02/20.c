#include <stdio.h>
//convert seconds to h:m:s:ms
int main (void)
{
    //receive ms
    int h, m, s, ms;
    h=0; m=0; s=0;
    printf("\nGimme the ms: ");

    scanf("%d", &ms);
    s = ms/1000; //get the integer
    ms = ms%1000;// get the remainder

    m = s/60;
    s = s%60;

    h = m/60;
    m=m%60;

    printf("\n%dh:%dm:%ds:%dms\n",h,m,s,ms);


    return 0;
}
