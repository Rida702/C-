#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	float f[10];
	int i, n1, n2;
	for (i=0;i<10;i++){
		n1 = rand() % 100;
		n2 = rand() % n1 + 1 ;
		f[i] = n1 / (float) n2;
		printf ("%5.2f ",  f[i]);
	}
	printf ("\n");
	return 0;
}
