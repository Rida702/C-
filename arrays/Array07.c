#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int a[10], i, sum = 0;
	for (i=0;i<10;i++){
		a[i] = rand() % 100;
		printf ("%d ", a[i]);
	}
	printf ("\n");
	//Find Sum
	for (i=1;i<10;i++)
		sum += a[i] ;
	//Find & Print Average
	printf ("Average: %.2f\n", (float)sum / 10 );
	return 0;
}
