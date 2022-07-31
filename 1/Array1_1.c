#include <stdio.h>

int main(){
	int a[5] = { 36 , 29 , 18 , 24 , 45 };
	int b[5] = { 3 , 4 , 1 , 0 , 2 }, i;
	for (i=0;i<5;i++)
		printf ("%d ", a[ b [ i ] ] );
	printf ("\n");
	return 0;
}
