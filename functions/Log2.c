#include <stdio.h>
#include <math.h>

float log_2(float v){
	return log10(v)/log10(2);
}
int main(){
	int i;
	printf ("Value  Log2\n");
	for (i=1;i<=1024;i=i*2){
		printf ("%d\t%1.0f\n", i,  log_2(i));
	}
	return 0;
}
