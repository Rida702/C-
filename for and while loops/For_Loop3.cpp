#include <stdio.h>

int main(){
	//Print 1 to 100 numbers divisible by 3 or 5
	int i;
	for (i=1;i<=100;i++)
		if (i % 3 == 0 || i % 5 == 0 )
		printf("%4d", i);
	printf("\n");
	return 0;	
}
