#include <stdio.h>

int main(){
	int a[5], i;
	a[0] = 25;
	a[1] = 35;
	a[2] = 45;
	a[3] = 55;
	a[4] = 65;
	for (i=0;i<5;i++)
		printf ("%d ", a[i]);
	printf ("\n");
	return 0;
}
