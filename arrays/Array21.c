#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int x[12], i, j, temp	;
	srand(time(0));
	printf("Printing Array as One Dimension\n");
	for (i=0;i<12;i++){
		x[i] = rand()%100;
		if (i==6)	printf("\n");
		printf("%2d ", x[i]);
	}
	printf("\nPrinting Array as Two Dimensional with two rows and six columns\n");                                                                                     	//Print Array
	for (i=0;i<2;i++){
		for (j=0;j<6;j++)
			printf("%2d ", x[i*6+j]);
		printf("\n");
	}
	printf("\nPrinting Array as Two Dimensional with three rows and four columns\n");                                                                                     	//Print Array
	for (i=0;i<3;i++){
		for (j=0;j<4;j++)
			printf("%2d ", x[i*4+j]);
		printf("\n");
	}
	printf("\nPrinting Array as Two Dimensional with four rows and three columns\n");                                                                                     	//Print Array
	for (i=0;i<4;i++){
		for (j=0;j<3;j++)
			printf("%2d ", x[i*3+j]);
		printf("\n");
	}
	return 0;
}
