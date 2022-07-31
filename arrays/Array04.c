#include <stdio.h>

int main(){
	srand(time(0));
	int a[5]={37,48,59,67}, i;
	for (i=1;i<=5;i++)
		printf ("Value %d is:%d\n", i, a[i-1]);
	return 0;
}
