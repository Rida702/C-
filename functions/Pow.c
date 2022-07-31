#include <stdio.h>
#include <math.h>

int main(){
	srand(time(0));
	int i, n1, n2;
	printf ("Value  Power\n");
	for (i=1;i<=10;i++){
		n1 = rand() % 10 + 1;
		n2 = rand() % 10 + 1;
		printf ("%d^%d = %1.0f\n", n1, n2, pow(n1, n2));
	}
	return 0;
}
