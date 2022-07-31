#include <stdio.h>
#include <math.h>

int main(){
	int i, n;
	printf ("Value  SquareRoot\n");
	for (i=1;i<=10;i++){
		n = rand() % 100;
		printf ("%d\t%0.2f\n", n,  sqrt(n));
	}
	return 0;
}
