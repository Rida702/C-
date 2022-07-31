#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int a[10], i;
	for (i=0;i<10;i++){
		a[i] = rand() % 100;
		printf ("%d ", a[i]);
	}
	printf ("\n");
	return 0;
}
