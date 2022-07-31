#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int a[10], i, max;
	for (i=0;i<10;i++){
		a[i] = rand() % 100;
		printf ("%d ", a[i]);
	}
	printf ("\n");
	//Find Max Value
	max = a[0];
	for (i=1;i<10;i++)
		if (a[i] > max )
			max = a[i] ;
	printf ("Maximum Value is: %d\n", max);
	
	return 0;
}
