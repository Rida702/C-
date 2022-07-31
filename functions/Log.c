#include <stdio.h>
#include <math.h>

int main(){
	int i;
	printf ("Value  Log10\n");
	for (i=1;i<=1000000;i=i*10){
		printf ("%d\t%1.0f\n", i,  log10(i));
	}
	return 0;
}
