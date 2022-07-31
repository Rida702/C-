#include <stdio.h>

int main(){
	int a[5] = { 36 , 29 , 18 , 24 , 45 };
	int b[5] = { 1 , 3 , 2 , 4 , 0 }, i;
	for (i=0;i<5;i++)
		printf ("%d ", a[ b [ i ] ] );
	printf ("\n");
	return 0;
}
