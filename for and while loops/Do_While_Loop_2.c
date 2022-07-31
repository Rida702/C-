#include <stdio.h>

int main(){
	//Do-While for correct data input
	int n;
	do{		
		printf("Enter Positive Number:");
		scanf("%d", &n);
		if (n<0)
			printf ("Error, Enter positive value only\n");
	}while (n<0);//Repeat input if n is less than zero
	printf ("Square root of %d = %1.2f\n", n, sqrt(n));
	return 0;
}
