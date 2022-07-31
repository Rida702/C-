#include <stdio.h>

int main(){
	int a[5], i;
	a[0] = 25;
	a[1] = 35;
	a[2] = 45;
	a[3] = 55;
	a[4] = 65;
	for (i=1;i<=5;i++)
		printf ("Value %d is:%d\n", i, a[i-1]);
	return 0;
}
