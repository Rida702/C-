#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int a[10], i, sum = 0;
	float average;
	for (i=0;i<10;i++){
		a[i] = rand() % 100;
		sum += a[i];
		printf ("%d ", a[i]);
	}
	printf ("\n");
	average = (float)sum / 10 ;
	printf ("Average: %.2f\n",  average);
	for (i=0;i<10;i++){
		if (a[i] > average)
			printf ("%d is greater than average\n", a[i]);
		else
			printf ("%d is less than equal average\n", a[i]);
	}
	return 0;
}
