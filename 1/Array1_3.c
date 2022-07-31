#include <stdio.h>

int main(){
	//How to deal adjacent pairs
	int a[5] = { 36 , 29 , 18 , 24 , 45 };
	int i;
	for (i=0;i<5;i++)
		printf ("%d ", a[ i ] );
	printf ("\n");
	for (i=0;i<4;i++)
	  if ( a[i] < a[i+1])
		printf ("%d is smaller than %d\n", a[ i ], a[ i+1 ] );
	  else
	  	printf ("%d is greater than equal %d\n", a[ i ], a[ i+1 ] );
	return 0;
}
