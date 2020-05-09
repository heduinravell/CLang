#include <stdio.h>

//Order of 3 integers asc
int main (void)
{
	int x, y, z, s;
	scanf("%d%d%d", &x, &y, &z);
	//considering 3 different numbers
	if (x>y){s=y; y=x; x=s;}
	if (y>z){s=z; z=y; y=s;}
	if (x>y){s=y; y=x; x=s;}
	//if (y>z){s=z; z=y; y=s;}
	printf("%d, %d, %d.", x, y, z);



return 0;
}
